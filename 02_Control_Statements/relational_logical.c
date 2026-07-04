#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n--- Relational Operators ---\n");
    printf("%d == %d : %d\n", a, b, a == b);
    printf("%d != %d : %d\n", a, b, a != b);
    printf("%d >  %d : %d\n", a, b, a > b);
    printf("%d <  %d : %d\n", a, b, a < b);
    printf("%d >= %d : %d\n", a, b, a >= b);
    printf("%d <= %d : %d\n", a, b, a <= b);

    printf("\n--- Logical Operators ---\n");
    printf("(%d > 0) && (%d > 0) : %d\n", a, b, (a > 0) && (b > 0));
    printf("(%d > 0) || (%d > 0) : %d\n", a, b, (a > 0) || (b > 0));
    printf("!(%d > 0) : %d\n", a, !(a > 0));

    printf("\n--- Conditional (Ternary) Operator ---\n");
    int max = (a > b) ? a : b;
    printf("Max of %d and %d = %d\n", a, b, max);

    return 0;
}
