
#include<stdio.h>

int main()
{
char s1[50]="hii who",s2[50]="are you",s3[100];
int i=0,j=0;


while (s1[i]!='\0')
{
s3[i]=s1[i];
i++;
}
while (s2[j] != '\0')
{
s3[i]=s2[j];
i++;
j++;
}
s3[i]='\0';
printf("\nThe resultant string is: %s ",s3);
printf("\nThe length of the resultant string is: %d",i);
return 0;
}
