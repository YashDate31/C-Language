#include <stdio.h>

int main() {
    int size, target, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &target);

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            printf("Element %d found at position %d\n", target, i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Element %d not found in the array\n", target);

    return 0;
}
