#include <stdio.h>
#include <math.h>
#include  <conio.h>

float Areaoftriangle(float a,float b,float c);

float main()
{
    float a,b,c,Area;
    printf("\nEnter the sides of triangle:");
    scanf("%f%f%f",&a,&b,&c);
    Area = Areaoftriangle(a,b,c);
    printf("\nArea of given triangle=%.2f",Area);
    getch();
    return 0;
}

float Areaoftriangle(float a,float b,float c)
{
    float s,Area;
    s = (a+b+c)/2;
    Area = sqrt(s*(s-a)*(s-b)*(s-c));
    return Area;
}

