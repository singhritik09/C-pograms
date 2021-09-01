#include <stdio.h>

int main() {
    int i=1,sqr,n;
    printf("Enter number n:");
    scanf("%d",&n);
    
    while (i<=n){
        sqr = i*i;
        printf("%d\n",sqr);
        i = i + 1;
    }
    return 0;
}