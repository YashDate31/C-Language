#include <stdio.h>

int main() {
    int a = 12, b = 10;

    printf("a = %d (binary: 1100)\n", a);
    printf("b = %d (binary: 1010)\n\n", b);

    printf("a & b  (AND)  = %d\n", a & b);
    printf("a | b  (OR)   = %d\n", a | b);
    printf("a ^ b  (XOR)  = %d\n", a ^ b);
    printf("~a     (NOT)  = %d\n", ~a);
    printf("a << 1 (Left Shift)  = %d\n", a << 1);
    printf("a >> 1 (Right Shift) = %d\n", a >> 1);

    printf("\n--- Checking Even or Odd using Bitwise ---\n");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num & 1)
        printf("%d is odd\n", num);
    else
        printf("%d is even\n", num);

    return 0;
}
