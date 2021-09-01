#include <stdio.h>
#include <math.h>

int main()
{
    int i,m,n;
    printf("\nEnter m: ");
    scanf("%d",&m);
    printf("\nEnter n: ");
    scanf("%d",&n);
    for(i=m;i<=n;i++){
        if(i%2==0){
            printf("\n%d",i);
        }
    }

    getch();
    return 0;
}
