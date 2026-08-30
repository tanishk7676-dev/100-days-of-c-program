#include <stdio.h>

int main(void) 
{
    int l, f;

    printf("Enter the number of late days: ");
    scanf("%d", &l);

    if (l <= 0) 
    {
        printf("No fine.\n");
    }
    else if (l <= 5) 
    {
        f = l * 2;
        printf("Fine: Rs. %d\n", f);
    }
    else if (l <= 10) 
    {
        f = (5 * 2) + (l - 5) * 4;
        printf("Fine: Rs. %d\n", f);
    }
    else if (l <= 30) 
    {
        f = (5 * 2) + (5 * 4) + (l - 10) * 6;
        printf("Fine: Rs. %d\n", f);
    } 
    else 
    {
        printf("Membership Cancelled.\n");
    }

    return 0;
}