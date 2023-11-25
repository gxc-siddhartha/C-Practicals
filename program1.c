#include <stdio.h>
#include <limits.h> // Used for getting the ranges data types.
#include <float.h> // Used for getting the ranges of floating-point data types.

int main() {
    // Integer types
    printf("Integer Types:\n");
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Range of char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Range of int: %d to %d\n", INT_MIN, INT_MAX);
    printf("Size of short: %lu bytes\n", sizeof(short));
    printf("Range of short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Size of long: %lu bytes\n", sizeof(long));
    printf("Range of long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Size of long long: %lu bytes\n", sizeof(long long));
    printf("Range of long long: %lld to %lld\n", LLONG_MIN, LLONG_MAX);

    // Floating-point types
    printf("\nFloating-Point Types:\n");
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Range of float: %.3e to %.3e\n", FLT_MIN, FLT_MAX);
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Range of double: %.3e to %.3e\n", DBL_MIN, DBL_MAX);
    printf("Size of long double: %lu bytes\n", sizeof(long double));
    printf("Range of long double: %.3Le to %.3Le\n", LDBL_MIN, LDBL_MAX);

    return 0;
}
