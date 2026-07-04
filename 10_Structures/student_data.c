#include <stdio.h>

struct Student {
    char name[30];
    int roll_no;
    int marks1, marks2, marks3;
    float average;
};

int main() {
    struct Student s[2];
    int i;

    for (i = 0; i < 2; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks of 3 subjects: ");
        scanf("%d %d %d", &s[i].marks1, &s[i].marks2, &s[i].marks3);

        s[i].average = (s[i].marks1 + s[i].marks2 + s[i].marks3) / 3.0;
    }

    printf("\n--- Student Details ---\n");
    for (i = 0; i < 2; i++) {
        printf("\nName: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].roll_no);
        printf("Average: %.2f\n", s[i].average);
    }

    return 0;
}
