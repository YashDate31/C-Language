#include <stdio.h>

#define DEBUG 1

int main() {
    int a = 10, b = 20;
    int sum = a + b;

#if DEBUG
    printf("[DEBUG] a = %d, b = %d\n", a, b);
    printf("[DEBUG] sum = %d\n", sum);
#endif

    printf("Result: %d\n", sum);

#ifdef DEBUG
    printf("[DEBUG] Program finished successfully\n");
#endif

#ifndef RELEASE
    printf("This is not a release build\n");
#endif

    return 0;
}
