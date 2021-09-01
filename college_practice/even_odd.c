#include <stdio.h>
#include <math.h>


int main(){
    int number;
    printf("Enter the number :");
    scanf("%d",&number);
    if (number%2==0){
        printf("Given number %d is even",number);
    }
    else{
        printf("Given number %d is odd",number);
    }
    return 0;
}

