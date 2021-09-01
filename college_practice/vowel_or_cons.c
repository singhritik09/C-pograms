#include <stdio.h>
#include <conio.h>

int main()
{
    char ch,vowel_lower,vowel_upper;
    printf("Enter the alphabet: \n");
    scanf("%ch",&ch);
    vowel_lower = (ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u' );
    vowel_upper = (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    if (vowel_lower || vowel_upper)
        printf("Given alphabet is a vowel");

    else{
        printf("Given alphabet is a consonant");
    }
    return 0;

}
