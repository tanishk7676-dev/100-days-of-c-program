#include <stdio.h>

int main() 
{
    int n, b = 0, r, m = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    while (n > 0) {
        r = n % 2;
        b = b + (r * m);
        m = m * 10;
        n = n / 2;
    }
    printf("%d\n", b);
    
    return 0;
} 