#include <stdio.h>

int main()
{
    int fah,cel;
    printf("\nEnter temperature in fahrenheit: ");
    scanf("%d",&fah);
    cel = (fah-32)*5/9;
    printf("\nTemperature in degree celcius is %d",cel);
    return 0;
}
