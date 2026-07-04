#include <stdio.h>

#define PI 3.14159
#define AREA(r) (PI * (r) * (r))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    float radius;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    printf("Area of circle = %.2f\n", AREA(radius));

    int x = 25, y = 40;
    printf("\nMax of %d and %d = %d\n", x, y, MAX(x, y));

    printf("\nValue of PI = %f\n", PI);

    return 0;
}
