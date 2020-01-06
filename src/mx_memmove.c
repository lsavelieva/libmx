#include "../inc/libmx.h"
/*
void *mx_memmove(void *dst, const void *src, size_t len) {
    char *tmp1 = (char*)dst;
    const char *tmp2 = src;

    if (tmp1 < tmp2) {
        while (len-- > 0)
            *tmp1++ = *tmp2++;
    }
    else {
        for (int i = len; i > 0; i--)
            tmp1[i - 1] = tmp2[i - 1];
    }
    return dst;
} */

void *mx_memmove(void *dst, const void *src, size_t len) {
    char *res = dst;
    char *buf = NULL;

    if (len == 0)
        return NULL;
    buf = mx_strnew(len);
    mx_memcpy(buf, src, len);
    for (size_t i = 0; i < len; i++) {
        res[i] = buf[i];
    }
    free(buf);
    return dst;
}

