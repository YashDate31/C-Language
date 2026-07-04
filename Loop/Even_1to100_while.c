#include<stdio.h>
int main()
{
    int i;
    i=2;
    while(i<=100)
    {
        if(i%2==0)
        {
            printf("\n %d",i);
        }
        i=i+1;
    }
    return 0;
}