#include <stdio.h>

int main() {
    char name[50];
    int days, room;
    char roomType;
    float bill, rate;

    printf("Welcome to Hotel Booking!\n");

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Choose a room number (101 to 105): ");
    scanf("%d", &room);

    if (room < 101 || room > 105) {
        printf("Invalid room number! Please restart and choose between 101 and 105.\n");
        return 1;
    }

    printf("Choose Room Type (A for AC / N for Non-AC): ");
    scanf(" %c", &roomType); // space before %c to skip newline

    if (roomType == 'A' || roomType == 'a') {
        rate = 1500;
    } else if (roomType == 'N' || roomType == 'n') {
        rate = 1000;
    } else {
        printf("Invalid room type! Please choose A or N.\n");
        return 1;
    }

    printf("How many days will you stay? ");
    scanf("%d", &days);

    bill = days * rate;

    printf("\n--- Booking Summary ---\n");
    printf("Name: %s\n", name);
    printf("Room Number: %d\n", room);
    printf("Room Type: %s\n", (rate == 1500) ? "AC" : "Non-AC");
    printf("Days Stayed: %d\n", days);
    printf("Rate per Day: %.2f rs.\n", rate);
    printf("Total Bill: %.2f rs.\n", bill);
    printf("Room booked successfully!\n");

    return 0;
}
