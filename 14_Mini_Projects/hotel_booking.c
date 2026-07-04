#include <stdio.h>

int main() {
    char name[50];
    int days, room;
    char roomType;
    float bill, rate;

    printf("=== Hotel Booking System ===\n\n");

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Choose a room number (101 to 105): ");
    scanf("%d", &room);

    if (room < 101 || room > 105) {
        printf("Invalid room number! Choose between 101 and 105\n");
        return 1;
    }

    printf("Room Type (A for AC / N for Non-AC): ");
    scanf(" %c", &roomType);

    if (roomType == 'A' || roomType == 'a') {
        rate = 1500;
    } else if (roomType == 'N' || roomType == 'n') {
        rate = 1000;
    } else {
        printf("Invalid room type\n");
        return 1;
    }

    printf("How many days will you stay? ");
    scanf("%d", &days);

    bill = days * rate;

    printf("\n--- Booking Summary ---\n");
    printf("Name: %s\n", name);
    printf("Room Number: %d\n", room);
    printf("Room Type: %s\n", (rate == 1500) ? "AC" : "Non-AC");
    printf("Days: %d\n", days);
    printf("Rate per Day: %.2f rs\n", rate);
    printf("Total Bill: %.2f rs\n", bill);
    printf("Booking confirmed!\n");

    return 0;
}
