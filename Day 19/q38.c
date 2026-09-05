#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &n);

    int t = n;  // store original number for printing

    while (n > 0) {
        int z = n % 10;  // extract last digit
        sum += z;        // add to sum
        n = n / 10;          // remove last digit
    }

    printf("Sum of the digits of %d is: %d\n", t, sum);
    return 0;
}