#include <stdio.h>
#include <conio.h>

int main()
{
    int marks[5][3],i,j,max;
    printf("\nEnter data:");
    printf("\n--------------------");

    for(i=0;i<5;i++){
        printf("\nMarks obtained by student %d in 3 subjects:",i);
        for(j=0;j<3;j++){
            scanf("%d",&marks[i][j]);
        }
    }
    for(j=0;j<3;j++){
        max = marks[0][j];
        for(i=0;i<5;i++){
            if(marks[i][j]>max);
            max = marks[i][j];
        }
        printf("\nMaximum marks of student %d is %d",i,max);
    }

    getch();
    return 0;
}

