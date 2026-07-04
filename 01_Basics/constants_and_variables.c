#include <stdio.h>

int main() {
    const int MAX = 100;
    const float PI = 3.14;

    int age = 20;
    float height = 5.8;
    char grade = 'A';

    printf("--- Constants ---\n");
    printf("MAX = %d\n", MAX);
    printf("PI = %.2f\n", PI);

    printf("\n--- Variables ---\n");
    printf("Age = %d\n", age);
    printf("Height = %.1f\n", height);
    printf("Grade = %c\n", grade);

    age = 21;
    height = 5.9;
    printf("\n--- After Changing ---\n");
    printf("Age = %d\n", age);
    printf("Height = %.1f\n", height);

    return 0;
}
