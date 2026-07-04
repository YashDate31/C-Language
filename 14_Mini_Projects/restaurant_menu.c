#include <stdio.h>

struct FoodItem {
    char name[30];
    float price;
};

int main() {
    struct FoodItem menu[5] = {
        {"Vada Pav", 20.00},
        {"Samosa", 15.00},
        {"Pav Bhaji", 80.00},
        {"Dosa", 60.00},
        {"Chai", 10.00}
    };

    int choice, qty;
    float total = 0;
    char more;

    printf("=== Restaurant Food Menu ===\n\n");
    printf("%-5s %-20s %-10s\n", "No.", "Item", "Price");
    printf("-----------------------------------\n");

    for (int i = 0; i < 5; i++) {
        printf("%-5d %-20s Rs.%-10.2f\n", i + 1, menu[i].name, menu[i].price);
    }
    printf("-----------------------------------\n");

    do {
        printf("\nEnter item number: ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 5) {
            printf("Invalid item!\n");
            continue;
        }

        printf("Enter quantity: ");
        scanf("%d", &qty);

        float amount = menu[choice - 1].price * qty;
        total += amount;

        printf("%s x %d = Rs.%.2f\n", menu[choice - 1].name, qty, amount);

        printf("Order more? (y/n): ");
        scanf(" %c", &more);

    } while (more == 'y' || more == 'Y');

    printf("\n=================================\n");
    printf("       YOUR BILL\n");
    printf("=================================\n");
    printf("Total Amount: Rs.%.2f\n", total);
    printf("=================================\n");
    printf("Thank you! Visit again!\n");

    return 0;
}
