#include <stdio.h>

int main()
{
    int n1,n2,sum,diff,mul;
    float div,rem;
    int *ptr1,*ptr2;
    ptr1=&n1;
    ptr2=&n2;

    printf("\nEnter two numbers:");
    scanf("%d%d",ptr1,ptr2);

    sum=(*ptr1) + (*ptr2);
    diff=(*ptr1)-(*ptr2);
    mul=(*ptr1)*(*ptr2);
    div =  (*ptr1)/(*ptr2);
    rem = (*ptr1)%(*ptr2);

    printf("\nSum is: %d",sum);
    printf("\nDifference is: %d",diff);
    printf("\nProduct is: %d",mul);
    printf("\nQuotient is: %f",div);
    printf("\Remainder is: %f",rem);

    return 0;

}
