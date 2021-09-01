#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[10],i,j,pos=-1,mid,beg,end,n,num,found=0;
    printf("\nEnter size of array:");
    scanf("%d",&n);
    printf("\nEnter the elements");
    for(i=0;i<n;i++){
        printf("\nArray[%d]=",i);
        scanf("%d",&arr[i]);
    }
    printf("\nElements of array are:");
    for(i=0;i<n;i++){
        printf("Array[%d] = %d \t",i,arr[i]);
    }

    beg = 0,end = n-1;
    while(i=beg,i<=end,i++){
        mid= (beg+end)/2;
        if(arr[mid]==num){
            printf("\n %d is at %d ",num,i);
        }
        else if(arr[mid]>num){
            end = mid - 1;
        }
        else{
            beg = mid + 1;
        }

    }

    if(beg>end&&found==0){
        printf("\n %d is not present in the given array.");
    }

    getch();

    return 0;

}
