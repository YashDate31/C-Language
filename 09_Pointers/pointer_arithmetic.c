#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Pointer Arithmetic:\n");
    printf("ptr points to: %d (address: %p)\n", *ptr, ptr);

    ptr++;
    printf("After ptr++: %d (address: %p)\n", *ptr, ptr);

    ptr += 2;
    printf("After ptr += 2: %d (address: %p)\n", *ptr, ptr);

    ptr--;
    printf("After ptr--: %d (address: %p)\n", *ptr, ptr);

    return 0;
}
