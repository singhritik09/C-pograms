#include <stdio.h>
#include <conio.h>

int main()
{
    int m1[10][10],m2[10][10],i,j,r,c,sum[10][10];
    printf("\nEnter the number of rows:");
    scanf("%d",&r);
    printf("\nEnter the number of columns:");
    scanf("%d",&c);
    printf("\nEnter the elements of 1st Matrix:");

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("\nEnter element m1 %d %d:",i+1,j+1);
            scanf("%d",&m1[i][j]);
        }
    }
    printf("\nEnter the elements of 2nd Matrix:");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("\nEnter element m2 %d %d:",i+1,j+1);
            scanf("%d",&m2[i][j]);
        }
    }

    //Sum of matrices
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }
    ///Printing sum of two matrices::
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("\nSum:%d",sum[i][j]);
        }
    }

    getch();
    return 0;
}
