#include <stdio.h>

int main(void) {
    int n1, n2, n;

    printf("Enter two numbers: ");
    if (scanf("%d %d", &n1, &n2) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Select the operation:\n"
           "1. Addition\n"
           "2. Subtraction\n"
           "3. Multiplication\n"
           "4. Division\n"
           "Enter choice (1-4): ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    switch (n){
        case 1:
            printf("Sum of %d and %d is: %d\n", n1, n2, n1 + n2);
            break;

        case 2:
            printf("Subtractionof two number %d and %d is : \n %d - %d = %d\n %d - %d = %d\n, n1 , n2 ,n1 - n2 , n2 , n1 , n2 - n1 ");
            break;

        case 3:
            printf("Multiplication of %d and %d is: %d\n", n1, n2, n1 * n2);
            break;

        case 4:
            if (n2 == 0) {
                printf("Division by zero is not defined.\n");
            } else {
                // If you want integer division:
                printf("Division of %d by %d is: %d\n", n1, n2, n1 / n2);

            }
            break;

        default:
            printf("Invalid operation choice.\n");
            break;
    }

    return 0;
}