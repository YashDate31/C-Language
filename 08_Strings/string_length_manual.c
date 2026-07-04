#include <stdio.h>

int main() {
    char name[50];
    int length = 0;

    printf("Enter your name: ");
    scanf("%s", name);

    while (name[length] != '\0') {
        length++;
    }

    printf("Length of \"%s\" is %d\n", name, length);

    return 0;
}
