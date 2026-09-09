#include <stdio.h>

int main()
{
    int n,i, j, stars;

    printf("Enter input : ");
    scanf("%d",&n);

    for (i = 1; i <= 4; i++)
    {
        if (i == 1)
            stars = 4;
        else if (i == 2)
            stars = 5;
        else if (i == 3)
            stars = 3;
        else
            stars = 1;

        for (j = 1; j <= stars; j++)
        {
            printf("*\n");
        }

        printf("\n");
    }


    return 0;
}