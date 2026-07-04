#include <stdio.h>

int main() {
    int age;
    float height;
    char initial;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height (in cm): ");
    scanf("%f", &height);

    printf("Enter your first initial: ");
    scanf(" %c", &initial);

    printf("\nYour Details:\n");
    printf("Age: %d years\n", age);
    printf("Height: %.1f cm\n", height);
    printf("Initial: %c\n", initial);

    return 0;
}
