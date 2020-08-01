// Copyright © 2020 Blockchain Commons, LLC

#ifndef _UTIL_H
#define _UTIL_H

#ifdef __cplusplus
extern "C" {
#endif

#define ARRAY_SIZE(x) sizeof(x)/sizeof(x[0])

void serial_printf(const char *format, ...);

#ifdef __cplusplus
}
#endif

#define serial_assert(_exp) \
    do {                                                                \
        if (!(_exp)) {                                                  \
            serial_printf("ASSERTION FAILED: %s:%d\n",                  \
                          __FILE__, __LINE__);                          \
            abort();                                                    \
        }                                                               \
    } while (false)

void print_hex(uint8_t *data, size_t len);
bool compare_bytes_with_hex(uint8_t *data, size_t len, const char * hex);

struct Point {
  int x;
  int y;
};

#endif // _UTIL_H
