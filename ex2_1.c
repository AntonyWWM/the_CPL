#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // Using standard headers to determine the ranges
    printf("Ranges using standard headers:\n");
    printf("Signed char min: %d\n", SCHAR_MIN);
    printf("Signed char max: %d\n", SCHAR_MAX);
    printf("Unsigned char max: %u\n", UCHAR_MAX);
    printf("Signed short min: %d\n", SHRT_MIN);
    printf("Signed short max: %d\n", SHRT_MAX);
    printf("Unsigned short max: %u\n", USHRT_MAX);
    printf("Signed int min: %d\n", INT_MIN);
    printf("Signed int max: %d\n", INT_MAX);
    printf("Unsigned int max: %u\n", UINT_MAX);
    printf("Signed long min: %ld\n", LONG_MIN);
    printf("Signed long max: %ld\n", LONG_MAX);
    printf("Unsigned long max: %lu\n", ULONG_MAX);

    // Computing ranges manually
    printf("\nRanges computed manually:\n");
    printf("Signed char min: %d\n", -(char)((unsigned char)~0 >> 1) - 1);
    printf("Signed char max: %d\n", (char)((unsigned char)~0 >> 1));
    printf("Unsigned char max: %u\n", (unsigned char)~0);
    printf("Signed short min: %d\n", -(short)((unsigned short)~0 >> 1) - 1);
    printf("Signed short max: %d\n", (short)((unsigned short)~0 >> 1));
    printf("Unsigned short max: %u\n", (unsigned short)~0);
    printf("Signed int min: %d\n", -(int)((unsigned int)~0 >> 1) - 1);
    printf("Signed int max: %d\n", (int)((unsigned int)~0 >> 1));
    printf("Unsigned int max: %u\n", (unsigned int)~0);
    printf("Signed long min: %ld\n", -(long)((unsigned long)~0 >> 1) - 1);
    printf("Signed long max: %ld\n", (long)((unsigned long)~0 >> 1));
    printf("Unsigned long max: %lu\n", (unsigned long)~0);

    // Using standard headers to determine the ranges of floating-point types
    printf("\nFloating-point type ranges using standard headers:\n");
    printf("Float min: %E\n", FLT_MIN);
    printf("Float max: %E\n", FLT_MAX);
    printf("Double min: %E\n", DBL_MIN);
    printf("Double max: %E\n", DBL_MAX);
    printf("Long double min: %LE\n", LDBL_MIN);
    printf("Long double max: %LE\n", LDBL_MAX);

    return 0;
}
