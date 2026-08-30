#include <stdio.h>

int main(void) 
{
    int u, f;

    printf("Enter the number of units : ");
    scanf("%d", &u);

    if (u <= 0) 
    {
        printf("No bill.\n");
    }
    else if (u <= 100) 
    {
        f = u * 5;
        printf("Bill: Rs. %d\n", f);
    }
    else if (u <= 200) 
    {
        f = (5 * 100) + (u - 100) * 7;
        printf("Bill: Rs. %d\n", f);
    }
    else if (u <= 300) 
    {
        f = (5 * 100) + (7 * 100) + (u - 200) * 10;
        printf("Bill Rs. %d\n", f);
    } 
    else 
    {
        f = (5 * 100) + ( 7 * 100 ) + (10 * 100) + (u - 300) * 12 ;
        printf("Bill : rs. %d\n" , f) ; 
        
    }

    return 0;
}