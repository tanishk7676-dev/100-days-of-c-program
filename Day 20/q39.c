#include <stdio.h>

int main() {
    int n, sum = 1;
    printf("Enter any number: ");
    scanf("%d", &n);

    int t = n;  

    while (n > 0) {
        int z = n % 10;  
        if(z%2 != 0){
            sum *=z;
        }      
        n = n / 10;          
    }

    printf("Sum of the odd digits of %d is: %d\n", t, sum);
    return 0;
}