#include <stdio.h>

int main() {
    int num;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive number\n");
        goto end;
    }

    if (num % 2 == 0)
        goto even;
    else
        goto odd;

even:
    printf("%d is even\n", num);
    goto end;

odd:
    printf("%d is odd\n", num);

end:
    printf("Program finished\n");

    return 0;
}
