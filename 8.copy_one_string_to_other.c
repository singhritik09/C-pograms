#include <stdio.h>

int main()
{
    char s1[50],s2[50],s3[50];
    int i=0,j=0;

    printf("\nEnter first string:");
    gets(s1);
    printf("\nEnter second string:");
    gets(s2);

    while(s1[i]!='\0'){
        s3[i]=s1[i];
        i++;
    }

    while(s2[j]!='\0'){
        s3[i]=s2[j];
        i++;
        j++;
    }

    s3[i]='\0';

    printf("\nConcatenated string is:%s",s3);
    getch();

    return 0;

}
