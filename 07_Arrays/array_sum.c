#include <stdio.h>

int main() {
    int arr[5], sum = 0;

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("\nArray elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nSum of all elements = %d\n", sum);

    return 0;
}
