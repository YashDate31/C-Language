#include <stdio.h>

int main() {
    int age = 20;
    float marks = 85.5;
    double pi = 3.14159265;
    char grade = 'A';

    printf("Integer: %d\n", age);
    printf("Float: %.1f\n", marks);
    printf("Double: %.8lf\n", pi);
    printf("Character: %c\n", grade);

    printf("\nSize of int: %d bytes\n", sizeof(int));
    printf("Size of float: %d bytes\n", sizeof(float));
    printf("Size of double: %d bytes\n", sizeof(double));
    printf("Size of char: %d byte\n", sizeof(char));

    return 0;
}
