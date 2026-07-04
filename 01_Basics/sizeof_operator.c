#include <stdio.h>

int main() {
    printf("Size of char: %d byte\n", sizeof(char));
    printf("Size of int: %d bytes\n", sizeof(int));
    printf("Size of float: %d bytes\n", sizeof(float));
    printf("Size of double: %d bytes\n", sizeof(double));
    printf("Size of long: %d bytes\n", sizeof(long));
    printf("Size of long long: %d bytes\n", sizeof(long long));

    int arr[10];
    printf("\nSize of int array[10]: %d bytes\n", sizeof(arr));
    printf("Number of elements: %d\n", sizeof(arr) / sizeof(arr[0]));

    return 0;
}
