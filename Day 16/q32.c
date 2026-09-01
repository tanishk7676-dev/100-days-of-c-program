#include <stdio.h>

int main() 
{
    int n, r = 0, r1;
    
    printf("Enter A Number: ");
    scanf("%d", &n);
    
    int t = n;

    while (t != 0) {
        r1 = t % 10;
        r = r * 10 + r1;
        t /= 10;
    }
    
    if( r == n){
        printf("The number %d is a  palindrome . ", n);

    }
    else{
        printf("The number %d is not a  palindrome .", n);
    }
   
    
    return 0;
} 