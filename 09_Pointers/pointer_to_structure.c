#include <stdio.h>

struct Student {
    char name[30];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1;
    struct Student *ptr = &s1;

    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll_no);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    printf("\n--- Student Details (using pointer) ---\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll No: %d\n", ptr->roll_no);
    printf("Marks: %.2f\n", ptr->marks);

    printf("\nAddress of structure: %p\n", ptr);

    return 0;
}
