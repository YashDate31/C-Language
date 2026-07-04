#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],c[2][2];
    int i,j,k;
    printf("Enter The elements of array a:");

        for(i=1;i<=2;i++){

            for(j=1;j<=2;j++){

                scanf("%d",&a[i][j]);

            }
        }

        printf("Enter The elements of array b:");

            for(i=1;i<=2;i++){

                for(j=1;j<=2;j++){

                scanf("%d",&b[i][j]);
            }
             }


            for(i=1;i<=2;i++){

                for(j=1;j<=2;j++){ 
                    c[i][j]=0;

                    for(k=1;k<=2;k++)
                    {
                        c[i][j]=c[i][j]+a[i][k]*b[k][j];
                    }
                }
            } 

            for(i=1;i<=2;i++){

                for(j=1;j<=2;j++){
    
                    printf("\t%d",c[i][j]);
                }
                printf("\n");
                 }
 }
