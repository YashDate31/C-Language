#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, new_n, i;

    printf("Enter initial size: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter new size: ");
    scanf("%d", &new_n);

    arr = (int *)realloc(arr, new_n * sizeof(int));

    if (arr == NULL) {
        printf("Reallocation failed\n");
        return 1;
    }

    if (new_n > n) {
        printf("Enter %d more elements:\n", new_n - n);
        for (i = n; i < new_n; i++) {
            scanf("%d", &arr[i]);
        }
    }

    printf("All elements: ");
    for (i = 0; i < new_n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
