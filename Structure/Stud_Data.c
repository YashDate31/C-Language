#include<stdio.h>
struct student{
    char sname[20];
    int roll_no;
    int m1,m2,m3;
    float avg;
}s[2];
int main()
{
    int i;
    for(i=0;i<2;i++){
    printf("\nEnter Name of Student:");

    scanf("%s",s[i].sname);

    printf("\nEnter Roll no:");

    scanf("%d",&s[i].roll_no);

    printf("\nEnter Marks of Three Subject:");

    scanf("%d %d %d",&s[i].m1,&s[i].m2,&s[i].m3);

    s[i].avg=(s[i].m1+s[i].m2+s[i].m3)/3;

    }


    for(i=0;i<2;i++)
      {
        printf("\nYour Name is %s",s[i].sname);

        printf("\nYour Roll no is %d",s[i].roll_no);

        printf("\nYour Average is %.2f",s[i].avg);

      }
    


return 0;
}
