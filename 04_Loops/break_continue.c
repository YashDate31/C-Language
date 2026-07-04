#include <stdio.h>

int main() {
    int i;

    printf("Using break - stops at 5:\n");
    for (i = 1; i <= 10; i++) {
        if (i == 6)
            break;
        printf("%d ", i);
    }
    printf("\n");

    printf("\nUsing continue - skips even numbers:\n");
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0)
            continue;
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
