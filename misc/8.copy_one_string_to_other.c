#include <stdio.h>
int main()
{
char s1[100],s2[50], i,j,l;
printf("Enter any String = ");
gets(s1);
printf("Enter another string = ");
gets(s2);
while(s1[i]!='\0')
i++;
l=i;
while(s2[j]!='\0')
{
s1[i]=s2[j];
i++;
j++;
}
l=i;
printf("Length of the string=%d\n",l);
s1[i]='\0';
printf("After copying the string = ");
puts(s1);
return 0;
}
