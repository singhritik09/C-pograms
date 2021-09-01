#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a,b,c;
    float discriminant,root1,root2,realpart,imaginarypart;
    printf("\nEnter the coefficient of x^2: ");
    scanf("%d",&a);
    printf("\nEnter the coefficient of x: ");
    scanf("%d",&b);
    printf("\nEnter the constant: ");
    scanf("%d",&c);
    discriminant = b*b - 4*a*c;
    //Real and unequal roots

    if (discriminant>0){
        root1 = (-b+sqrt(b*b-4*a*c))/(2*a);
        root2 = (-b-sqrt(b*b-4*a*c))/(2*a);
        printf("\nRoots  of the given quadratic equation are:%.2f and %.2f ",root1,root2);
    }

    //real and equal roots
    else if(discriminant==0){
        root1 = -b/(2*a);
        root2 = root1;
    }

    //Imaginary roots
    else{
        realpart = -b/(2*a);
        imaginarypart = sqrt(-discriminant)/(2*a);
        printf("\nRoots are:%.2f %.2f %.2f %.2f",realpart,imaginarypart,realpart,imaginarypart);
    }

    getch();
    return 0;
}
