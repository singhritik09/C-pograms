#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 10

int main()
{
    int arr[MAX],i,RandNo;
    for(i=0;i<MAX;i++){
        RandNo=rand() %MAX;
        arr[i]=RandNo;
    }
    printf("\nElements of array are:\n");
    for(i=0;i<MAX;i++){
        printf("\t%d",arr[i]);
        getch();
        return 0;
    }

}
