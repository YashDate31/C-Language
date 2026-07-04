#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int roll_no;
    float marks;
};

void add_student(struct Student s[], int *count) {
    printf("Enter name: ");
    scanf("%s", s[*count].name);

    printf("Enter roll number: ");
    scanf("%d", &s[*count].roll_no);

    printf("Enter marks: ");
    scanf("%f", &s[*count].marks);

    (*count)++;
    printf("Student added!\n\n");
}

void display_all(struct Student s[], int count) {
    if (count == 0) {
        printf("No students to display\n\n");
        return;
    }

    printf("\n%-5s %-20s %-10s\n", "Roll", "Name", "Marks");
    printf("-------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%-5d %-20s %-10.2f\n", s[i].roll_no, s[i].name, s[i].marks);
    }
    printf("\n");
}

void search_student(struct Student s[], int count) {
    int roll;
    printf("Enter roll number to search: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (s[i].roll_no == roll) {
            printf("Found! Name: %s, Marks: %.2f\n\n", s[i].name, s[i].marks);
            return;
        }
    }
    printf("Student not found\n\n");
}

int main() {
    struct Student s[50];
    int count = 0, choice;

    printf("=== Student Management System ===\n\n");

    do {
        printf("1. Add Student\n");
        printf("2. Display All\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1: add_student(s, &count); break;
            case 2: display_all(s, count); break;
            case 3: search_student(s, count); break;
            case 4: printf("Goodbye!\n"); break;
            default: printf("Invalid choice\n\n"); break;
        }
    } while (choice != 4);

    return 0;
}
