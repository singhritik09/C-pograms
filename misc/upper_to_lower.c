#include <stdio.h>

int main()
{
    char s[50],lower_str[50];
    int i=0,j=0;
    printf("\nEnter the string:");
    gets(s);
    while(s[i]!=0){
        if(s[i]>='A'&&s[i]<='Z'){
            lower_str[j]=s[i]+32;
        }
        else{
            lower_str[j]=s[j];
        }
        i++;
        j++;
    }
    lower_str[j]='\0';
    printf("\String to lower case:");
    puts(lower_str);
    getch();
    return 0;
}
