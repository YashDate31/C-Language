#include <stdio.h>

int main() {
    int num;

    do {
        printf("Enter a positive number (0 to quit): ");
        scanf("%d", &num);

        if (num > 0)
            printf("You entered: %d\n", num);
        else if (num < 0)
            printf("Negative numbers are not allowed\n");

    } while (num != 0);

    printf("You entered 0, exiting!\n");

    return 0;
}
