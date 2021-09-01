#include <stdio.h>

int main()
{
    char s[50];
    int i,length;

    printf("\nEnter a string:");
    gets(s);
    while(s[i]!='\0'){
        i++;
    }
    length = i;
    printf("\nLength of string is: %d",length);

}

