#include <stdio.h>

struct Employee {
    char name[30];
    int id;
    char department[30];
    float salary;
};

int main() {
    struct Employee emp[10];
    int n, i;

    printf("How many employees (max 10)? ");
    scanf("%d", &n);

    if (n > 10) n = 10;

    for (i = 0; i < n; i++) {
        printf("\n--- Employee %d ---\n", i + 1);
        printf("Enter name: ");
        scanf("%s", emp[i].name);

        printf("Enter ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter department: ");
        scanf("%s", emp[i].department);

        printf("Enter salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\n\n========== Employee Records ==========\n");
    printf("%-5s %-15s %-15s %-10s\n", "ID", "Name", "Department", "Salary");
    printf("----------------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%-5d %-15s %-15s %-10.2f\n",
               emp[i].id, emp[i].name, emp[i].department, emp[i].salary);
    }

    return 0;
}
