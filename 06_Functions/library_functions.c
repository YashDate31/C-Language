#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main() {
    printf("--- Math Functions (math.h) ---\n");
    printf("sqrt(25)  = %.2f\n", sqrt(25));
    printf("pow(2, 5) = %.2f\n", pow(2, 5));
    printf("ceil(4.3) = %.2f\n", ceil(4.3));
    printf("floor(4.7) = %.2f\n", floor(4.7));
    printf("abs(-15)  = %d\n", abs(-15));

    printf("\n--- String Functions (string.h) ---\n");
    char str1[30] = "Hello";
    char str2[30] = "World";
    char str3[30];

    printf("strlen(\"%s\") = %d\n", str1, strlen(str1));
    strcpy(str3, str1);
    printf("strcpy: str3 = \"%s\"\n", str3);
    strcat(str1, str2);
    printf("strcat: str1 = \"%s\"\n", str1);
    printf("strcmp(\"abc\", \"abd\") = %d\n", strcmp("abc", "abd"));

    printf("\n--- Character Functions (ctype.h) ---\n");
    char ch = 'A';
    printf("toupper('a') = %c\n", toupper('a'));
    printf("tolower('A') = %c\n", tolower('A'));
    printf("isalpha('A') = %d\n", isalpha('A'));
    printf("isdigit('5') = %d\n", isdigit('5'));

    printf("\n--- getchar / putchar ---\n");
    printf("Enter a character: ");
    ch = getchar();
    printf("You entered: ");
    putchar(ch);
    putchar('\n');

    return 0;
}
