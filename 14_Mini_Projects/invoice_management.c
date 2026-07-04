#include <stdio.h>

struct Item {
    char name[30];
    int quantity;
    float price;
};

int main() {
    struct Item items[20];
    int n, i;
    float total = 0;

    printf("=== Invoice Management System ===\n\n");

    printf("Enter number of items: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nItem %d:\n", i + 1);
        printf("  Name: ");
        scanf("%s", items[i].name);
        printf("  Quantity: ");
        scanf("%d", &items[i].quantity);
        printf("  Price per unit: ");
        scanf("%f", &items[i].price);
    }

    printf("\n\n============================================\n");
    printf("               INVOICE\n");
    printf("============================================\n");
    printf("%-5s %-15s %-8s %-10s %-10s\n", "No.", "Item", "Qty", "Price", "Amount");
    printf("--------------------------------------------\n");

    for (i = 0; i < n; i++) {
        float amount = items[i].quantity * items[i].price;
        total += amount;
        printf("%-5d %-15s %-8d %-10.2f %-10.2f\n",
               i + 1, items[i].name, items[i].quantity, items[i].price, amount);
    }

    printf("--------------------------------------------\n");
    printf("%38s %.2f\n", "Subtotal: ", total);
    printf("%38s %.2f\n", "Tax (18%): ", total * 0.18);
    printf("%38s %.2f\n", "Total: ", total + (total * 0.18));
    printf("============================================\n");
    printf("Thank you for your purchase!\n");

    return 0;
}
