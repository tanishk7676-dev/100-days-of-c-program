#include <stdio.h>

int main()
{
    char z;

    printf("enter any character.: ");
    scanf("%c", &z);

    if (z == 'a' || z == 'e' || z == 'i' || z == 'o' || z == 'u')
    {
        printf("It's A Vowel");
    }
    else
    {
        printf("It's A Consonant");
    }

    return 0;
}