#include <stdio.h>

int main()
{
    float fah,cel;
    printf("\nEnter temperature in fahrenheit: ");
    scanf("%f",&fah);
    cel = (fah-32)*5/9;
    printf("\nTemperature in degree celsius is %f",cel);
    getch();
    return 0;
}
