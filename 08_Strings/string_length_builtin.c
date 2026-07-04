#include <stdio.h>
#include <string.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    int length = strlen(name);

    printf("Length of \"%s\" is %d\n", name, length);

    return 0;
}
