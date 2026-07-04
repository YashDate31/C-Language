#include <stdio.h>

void input_matrix(int m[3][3], char name) {
    printf("Enter elements of matrix %c (3x3):\n", name);
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &m[i][j]);
}

void display_matrix(int m[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d\t", m[i][j]);
        printf("\n");
    }
}

void add_matrices(int a[3][3], int b[3][3], int c[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            c[i][j] = a[i][j] + b[i][j];
}

void multiply_matrices(int a[3][3], int b[3][3], int c[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            c[i][j] = 0;
            for (int k = 0; k < 3; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
}

void transpose_matrix(int a[3][3], int t[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            t[i][j] = a[j][i];
}

int main() {
    int a[3][3], b[3][3], result[3][3];
    int choice;

    printf("=== Matrix Operations ===\n\n");

    do {
        printf("1. Addition\n");
        printf("2. Multiplication\n");
        printf("3. Transpose\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1:
                input_matrix(a, 'A');
                input_matrix(b, 'B');
                add_matrices(a, b, result);
                printf("\nA + B =\n");
                display_matrix(result);
                break;

            case 2:
                input_matrix(a, 'A');
                input_matrix(b, 'B');
                multiply_matrices(a, b, result);
                printf("\nA x B =\n");
                display_matrix(result);
                break;

            case 3:
                input_matrix(a, 'A');
                transpose_matrix(a, result);
                printf("\nTranspose of A =\n");
                display_matrix(result);
                break;

            case 4:
                printf("Goodbye!\n");
                break;

            default:
                printf("Invalid choice\n");
                break;
        }
        printf("\n");

    } while (choice != 4);

    return 0;
}
