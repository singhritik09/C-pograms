#include <stdio.h>

int main()
{
    char vowel_lower,vowel_upper,input;
    printf("\nEnter the character to be checked:");
    scanf("%ch",&input);
    vowel_lower = (input=='a'||input=='e'||input=='i'||input=='o'||input=='u');
    vowel_upper = (input=='A'||input=='E'||input=='I'||input=='O'||input=='U');
    if (vowel_lower || vowel_upper)
        printf("\nGiven alphabet is a vowel");

    else{
        printf("\nGiven alphabet is a consonant");
    }
    getch();
    return 0;

}

