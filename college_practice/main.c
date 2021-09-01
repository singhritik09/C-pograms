#include <stdio.h>
#include <stdlib.h>

int main(){
    float celsius,fahrenheit;
    printf("Temperature in fahrenheit:");
    scanf("%f",&fahrenheit);
    celsius = ((fahrenheit-32)*5)/9;
    printf("Temperature in celsius:%f \n",celsius);
    return 0;

}
