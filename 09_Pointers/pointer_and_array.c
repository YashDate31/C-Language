#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Accessing array elements using pointer:\n");

    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\t using pointer: %d\n", i, arr[i], *(ptr + i));
    }

    printf("\nAddresses:\n");
    for (int i = 0; i < 5; i++) {
        printf("&arr[%d] = %p\t ptr + %d = %p\n", i, &arr[i], i, (ptr + i));
    }

    return 0;
}
