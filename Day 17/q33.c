#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;
    int digits = 0;

    // Count digits
    if (n == 0)
    {
        digits = 1;
    }
    else
    {
        while (temp > 0)
        {
            digits++;
            temp /= 10;
        }
    }

    temp = n;
    int sum = 0;

    while (temp > 0)
    {
        int digit = temp % 10;
        int power = 1;

        for (int i = 0; i < digits; i++)
        {
            power *= digit;
        }

        sum += power;

        temp /= 10;
    }

    if (sum == n)
    {
        printf("%d is an Armstrong number.\n", n);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}

