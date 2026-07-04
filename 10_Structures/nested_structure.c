#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[30];
    int id;
    float salary;
    struct Date joining;
};

int main() {
    struct Employee emp;

    printf("Enter employee name: ");
    scanf("%s", emp.name);

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter salary: ");
    scanf("%f", &emp.salary);

    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &emp.joining.day, &emp.joining.month, &emp.joining.year);

    printf("\n--- Employee Details ---\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Salary: %.2f\n", emp.salary);
    printf("Joining Date: %02d/%02d/%d\n", emp.joining.day, emp.joining.month, emp.joining.year);

    return 0;
}
