#include <stdio.h>

float area(float height,float base)
{
    return (base*height)/2;
}

int main()
{
    float base,height,ar;
    printf("\n Enter base:");
    scanf("%f",&base);
    
    printf("Enter height:");
    scanf("%f",&height);
    
    ar = area(base,height);
    printf("\n %f is area of triangle",ar);
    return 0;
    
    
}