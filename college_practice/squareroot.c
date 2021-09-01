
#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c,discriminant,r1,r2,real,imaginary;
    printf("Enter tyhe coefficients:");
    scanf("%lf,%lf,%lf",&a,&b,&c);
    
    discriminant = b*b - 4*a*c;
    
    if (discriminant>0){
        r1 = (-b + sqrt(4*a*c))/2*a;
        r1 = (-b - sqrt(4*a*c))/2*a;
        
        printf("Roots of given eqn are %f %f",r1,r2);
    }
    
    else if (discriminant==0){
        r1 = -b/2*a;
        printf("Root of given equation is %f",r1);
    }
    
    else {
        real = -b/2*a;
        imaginary = sqrt(-discriminant)/2*a;
        printf("Roots are %.2lf+%.2fi and %.2lf - %.2fi",real,imaginary,real,imaginary)
    }
    
}
