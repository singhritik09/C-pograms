#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,square,square_sum;
    printf("\nEnter n: ");
    scanf("%d",&n);

    square_sum=0;

    for(i=1;i<=n;i++){
        if(i%2!=0){
            square = i*i;
            printf("%d  ",square);
            square_sum+=square;
        }
    }
    printf("\nSum is %d:",square_sum);

    getch();
    return 0;

}
