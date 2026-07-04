#include <stdio.h>

int main() {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];  // ✅ Variable Length Array

    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // You can now use arr[] normally
    return 0;
}
