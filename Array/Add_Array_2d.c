#include<stdio.h>
int main()
{
    int i,j;
    int a[2][2],b[2][2],c[2][2];
    printf("Enter Elements of 1st Matrix\n");

    // to take vales from user of 1st matrix
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
        // to take vales from user of 2nd matrix

        printf("Enter The Elements of 2nd Matrix");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }


    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
        
    }

    printf("\nSum is :");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n  ");
    }

    return 0;
}