#include <stdio.h>

int main()
{
    float a, b, c, d, x1, x2;
    float r, g;
    int i;

    printf("Enter The Values Of A, B & C Respectively.: ");
    scanf("%d %d %d", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (a == 0)
    {
        printf("This Ain't A Quadratic Equation");
    }
    else if (d < 0)
    {
        printf("The Equation Has Unreal Zeroes");
    }
    else 
    {
        if (d == 0)
        {
            r == 0;
        }
        else
        {
            g = d;
            
            for (i = 0; i < 20; i++)
            {
                g = (g + d / g) / 2;
            }

            r = g;
        }

        x1 = (-b + r) / (2 * a);
        x2 = (-b - r) / (2 * a);

        if (d == 0)
        {
            printf("The Zeroes Are Equal\n");
            printf("x1 = x2 = %.2f", x1);
        }
        else
        {
            printf("The Zeroes Are %.2f & %.2f", x1, x2);
        }
    }

    return 0;
}