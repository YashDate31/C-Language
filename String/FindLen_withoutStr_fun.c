#include<stdio.h>
int main()
{
    char name[50];
    int lenght=0;
    printf("Enter Your Name:");
    gets(name);
    while(name[lenght]!='\0')
    {
        lenght ++;
    }
    printf("%d",lenght);
    return 0;
}