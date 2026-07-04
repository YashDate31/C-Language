#include <stdio.h>

int main() {
    int choice, a, b;

    printf("--- Simple Menu ---\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (choice) {
        case 1:
            printf("Result: %d\n", a + b);
            break;
        case 2:
            printf("Result: %d\n", a - b);
            break;
        case 3:
            printf("Result: %d\n", a * b);
            break;
        case 4:
            if (b != 0)
                printf("Result: %d\n", a / b);
            else
                printf("Cannot divide by zero\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
