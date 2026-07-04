#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    int result = strcmp(str1, str2);

    if (result == 0)
        printf("Both strings are equal\n");
    else if (result < 0)
        printf("\"%s\" comes before \"%s\"\n", str1, str2);
    else
        printf("\"%s\" comes after \"%s\"\n", str1, str2);

    return 0;
}
