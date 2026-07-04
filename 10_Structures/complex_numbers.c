#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex add(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

struct Complex subtract(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

int main() {
    struct Complex c1, c2, sum, diff;

    printf("Enter first complex number (real imag): ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter second complex number (real imag): ");
    scanf("%f %f", &c2.real, &c2.imag);

    sum = add(c1, c2);
    diff = subtract(c1, c2);

    printf("\nFirst:  %.2f + %.2fi\n", c1.real, c1.imag);
    printf("Second: %.2f + %.2fi\n", c2.real, c2.imag);
    printf("\nAddition:    %.2f + %.2fi\n", sum.real, sum.imag);
    printf("Subtraction: %.2f + %.2fi\n", diff.real, diff.imag);

    return 0;
}
