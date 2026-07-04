#include <stdio.h>

int main() {
    char str[] = "Hello";
    char *ptr = str;

    printf("String using pointer:\n");
    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");

    ptr = str;
    printf("\nCharacter by character with addresses:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("ptr[%d] = '%c' at address %p\n", i, *(ptr + i), (ptr + i));
    }

    char *msg = "Programming in C";
    printf("\nDirect string pointer: %s\n", msg);

    return 0;
}
