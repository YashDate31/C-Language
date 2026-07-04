#include <stdio.h>

int main() {
    int a = 10, b = 3;

    float result1 = a / b;
    printf("Without casting: %f\n", result1);

    float result2 = (float)a / b;
    printf("With casting: %f\n", result2);

    float x = 9.8;
    int y = (int)x;
    printf("\nFloat to int: %.1f -> %d\n", x, y);

    char ch = 'A';
    int ascii = (int)ch;
    printf("Char to int (ASCII): %c -> %d\n", ch, ascii);

    return 0;
}
