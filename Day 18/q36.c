#include <stdio.h>

#include <stdio.h>

int main() {
    int num1, num2, i, hcf = 1;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Ensure inputs are non-negative (optional safety)
    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;

    // Find HCF by checking all numbers from 1 to min(num1, num2)
    for (i = 1; i <= num1 && i <= num2; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;  // i is a common factor; keep updating until the largest
        }
    }

    printf("HCF (GCD) of %d and %d is %d\n", num1, num2, hcf);

    return 0;
}