/* CRILAYLA decompressor helper for cpk_extract.py (loaded via ctypes).
 * int crilayla_decompress(const uint8_t *src, size_t src_len, uint8_t *dst, size_t dst_len)
 * src: whole entry starting at "CRILAYLA". dst: must be 0x100 + uncompressed_size bytes.
 * Returns 0 on success, negative on error. */
#include <stdint.h>
#include <string.h>
#include <stddef.h>

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

EXPORT int crilayla_decompress(const uint8_t *src, size_t src_len, uint8_t *dst, size_t dst_len)
{
    uint32_t usize, hoff;
    if (src_len < 0x10 + 0x100 || memcmp(src, "CRILAYLA", 8) != 0) return -1;
    usize = src[8] | (src[9] << 8) | (src[10] << 16) | ((uint32_t)src[11] << 24);
    hoff  = src[12] | (src[13] << 8) | (src[14] << 16) | ((uint32_t)src[15] << 24);
    if ((size_t)usize + 0x100 != dst_len) return -2;
    if ((size_t)hoff + 0x10 + 0x100 > src_len) return -3;
    memcpy(dst, src + 0x10 + hoff, 0x100);

    {
        const uint8_t *in = src + 0x10;
        ptrdiff_t ip = (ptrdiff_t)hoff - 1;      /* read backwards */
        uint8_t *out = dst + 0x100;
        ptrdiff_t op = (ptrdiff_t)usize - 1;     /* write backwards */
        uint32_t pool = 0; int left = 0;
        static const int vle[4] = {2, 3, 5, 8};

#define GETBITS(n, res) do { int _n = (n); uint32_t _r = 0; \
        while (_n > 0) { \
            int _take; \
            if (left == 0) { if (ip < 0) return -4; pool = in[ip--]; left = 8; } \
            _take = _n < left ? _n : left; \
            _r = (_r << _take) | ((pool >> (left - _take)) & ((1u << _take) - 1)); \
            left -= _take; _n -= _take; \
        } (res) = _r; } while (0)

        while (op >= 0) {
            uint32_t bit;
            GETBITS(1, bit);
            if (bit) {
                uint32_t off, len = 3, lv; int i;
                ptrdiff_t ref;
                GETBITS(13, off);
                ref = op + off + 3;
                for (i = 0; i < 4; i++) {
                    GETBITS(vle[i], lv);
                    len += lv;
                    if (lv != (1u << vle[i]) - 1) break;
                }
                if (i == 4) {
                    do { GETBITS(8, lv); len += lv; } while (lv == 255);
                }
                if (ref >= (ptrdiff_t)usize) return -5;
                while (len-- > 0) {
                    if (op < 0) return -6;
                    out[op] = out[ref];
                    op--; ref--;
                }
            } else {
                uint32_t b;
                GETBITS(8, b);
                out[op--] = (uint8_t)b;
            }
        }
    }
    return 0;
}
