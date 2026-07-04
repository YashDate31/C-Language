#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];
    int lenght;

        printf("Enter Your Name:");

         gets(name);

    lenght= strlen(name);

    printf("%d",lenght);

    return 0;
}