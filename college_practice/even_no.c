#include <stdio.h>

int main(){
    int m,n,i;
    
    printf("Enter numbers:");
    scanf("%d %d",&m,&n);
    
    for(i=m;i<=n;i++){
        if (i%2==0){
            
            printf("%d \n",i);
            
        }
    }
    
    return 0;
    
}