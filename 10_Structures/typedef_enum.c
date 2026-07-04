#include <stdio.h>

typedef int marks;
typedef float percentage;
typedef char name[30];

enum Day { MON = 1, TUE, WED, THU, FRI, SAT, SUN };

enum Season { SUMMER, WINTER, MONSOON, SPRING };

int main() {
    marks m1 = 85, m2 = 90, m3 = 78;
    percentage avg;
    name student = "Yash";

    avg = (m1 + m2 + m3) / 3.0;

    printf("--- typedef ---\n");
    printf("Student: %s\n", student);
    printf("Marks: %d, %d, %d\n", m1, m2, m3);
    printf("Average: %.2f%%\n", avg);

    printf("\n--- enum (Days) ---\n");
    enum Day today = FRI;
    printf("Friday = %d\n", today);

    for (int d = MON; d <= SUN; d++) {
        switch (d) {
            case MON: printf("%d - Monday\n", d);    break;
            case TUE: printf("%d - Tuesday\n", d);   break;
            case WED: printf("%d - Wednesday\n", d);  break;
            case THU: printf("%d - Thursday\n", d);  break;
            case FRI: printf("%d - Friday\n", d);    break;
            case SAT: printf("%d - Saturday\n", d);  break;
            case SUN: printf("%d - Sunday\n", d);    break;
        }
    }

    printf("\n--- enum (Seasons) ---\n");
    enum Season current = MONSOON;
    printf("Current season value: %d\n", current);

    return 0;
}
