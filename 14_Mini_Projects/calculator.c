#include <stdio.h>
#include <ctype.h>

int main() {
    int choice;
    float num1, num2, result;

    printf("=== Simple Calculator ===\n\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 5) {
        printf("Goodbye!\n");
        return 0;
    }

    if (choice < 1 || choice > 5) {
        printf("Invalid choice! Please enter 1-5\n");
        return 1;
    }

    printf("Enter first number: ");
    if (scanf("%f", &num1) != 1) {
        printf("Error: Please enter numeric values only\n");
        return 1;
    }

    printf("Enter second number: ");
    if (scanf("%f", &num2) != 1) {
        printf("Error: Please enter numeric values only\n");
        return 1;
    }

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("\n%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("\n%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("\n%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case 4:
            if (num2 == 0) {
                printf("\nError: Cannot divide by zero!\n");
            } else {
                result = num1 / num2;
                printf("\n%.2f / %.2f = %.2f\n", num1, num2, result);
            }
            break;
    }

    return 0;
}
