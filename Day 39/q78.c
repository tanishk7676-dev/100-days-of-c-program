//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main()
{
    int a[10][10];
    int n, sum = 0;

    printf("Enter the order of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    // Read matrix
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate main diagonal sum
    for(int i = 0; i < n; i++)
    {
        sum += a[i][i];
    }

    printf("Sum of main diagonal elements = %d", sum);

    return 0;
}