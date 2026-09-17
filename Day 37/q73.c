//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main()
{
    int a[10][10], sum[10];
    int rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");

    // Read matrix
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate sum of each row
    for(int i = 0; i < rows; i++)
    {
        sum[i] = 0;

        for(int j = 0; j < cols; j++)
        {
            sum[i] += a[i][j];
        }
    }

    // Print row sums
    printf("Sum of each row:\n");

    for(int i = 0; i < rows; i++)
    {
        printf("Row %d = %d\n", i + 1, sum[i]);
    }

    return 0;
}