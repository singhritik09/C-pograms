#include <stdio.h>

int main()
{
    char s[50],str_up[50];
    int i=0,j=0;
    printf("\nEnter the string:");
    gets(s);
    //scanf("%s",s);
    while(s[i]!='\0'){
        if(s[i]>='a'&&s[i]<='z'){
            str_up[j]=s[i]-32;
        }
        else{
            str_up[j]=s[j];
        }
        i++;
        j++;
    }
    str_up[j]='\0';
    printf("\nString in upper case:");
    puts(str_up);
    getch();
    return 0;
}

