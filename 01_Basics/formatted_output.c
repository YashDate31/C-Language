#include <stdio.h>

int main() {
    char name[30], mname[20], lname[20];
    int roll_no;
    float percentage;
    int day, month, year;
    char branch[30];

    printf("Enter First Name: ");
    scanf("%s", name);

    printf("Enter Middle Name: ");
    scanf("%s", mname);

    printf("Enter Last Name: ");
    scanf("%s", lname);

    printf("Enter Roll No: ");
    scanf("%d", &roll_no);

    printf("Enter Percentage: ");
    scanf("%f", &percentage);

    printf("Enter Date of Birth (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);

    printf("Enter Branch/College: ");
    scanf("%s", branch);

    printf("\n+------------------+------------------------------+\n");
    printf("| %-16s | %-12s %-8s %-7s |\n", "Name", name, mname, lname);
    printf("| %-16s | %-28d |\n", "Roll No", roll_no);
    printf("| %-16s | %-28.2f |\n", "Percentage", percentage);
    printf("| %-16s | %02d/%02d/%-22d |\n", "Date of Birth", day, month, year);
    printf("| %-16s | %-28s |\n", "Branch, College", branch);
    printf("+------------------+------------------------------+\n");

    return 0;
}
