#include <stdio.h>

int main() {
    int i = 2;

    printf("Even numbers from 2 to 100:\n");

    while (i <= 100) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }

    printf("\n");
    return 0;
}
