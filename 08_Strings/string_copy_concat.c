#include <stdio.h>
#include <string.h>

int main() {
    char src[50], dest[50], combined[100];

    printf("Enter first string: ");
    scanf("%s", src);

    strcpy(dest, src);
    printf("After strcpy: dest = \"%s\"\n", dest);

    printf("Enter second string: ");
    scanf("%s", combined);

    strcat(dest, combined);
    printf("After strcat: dest = \"%s\"\n", dest);

    strupr(src);
    printf("\nAfter strupr: \"%s\"\n", src);

    strlwr(src);
    printf("After strlwr: \"%s\"\n", src);

    return 0;
}
