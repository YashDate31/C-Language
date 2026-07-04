#include <stdio.h>

void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swap_by_value: a = %d, b = %d\n", a, b);
}

void swap_by_reference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swap_by_reference: a = %d, b = %d\n", *a, *b);
}

int main() {
    int x = 10, y = 20;

    printf("Original: x = %d, y = %d\n\n", x, y);

    printf("--- Call by Value ---\n");
    swap_by_value(x, y);
    printf("After call by value: x = %d, y = %d\n", x, y);
    printf("(Values did NOT change in main)\n\n");

    printf("--- Call by Reference ---\n");
    swap_by_reference(&x, &y);
    printf("After call by reference: x = %d, y = %d\n", x, y);
    printf("(Values DID change in main)\n");

    return 0;
}
