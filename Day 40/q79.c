//Perform diagonal traversal of a matrix.
#include <stdio.h>

int main()
{
    int a[10][10];
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

    // Diagonal traversal starting from top row
    for(int k = 0; k < cols; k++)
    {
        int i = 0, j = k;

        while(i < rows && j >= 0)
        {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }

        printf("\n");
    }

    // Diagonal traversal starting from first column
    for(int k = 1; k < rows; k++)
    {
        int i = k, j = cols - 1;

        while(i < rows && j >= 0)
        {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }

        printf("\n");
    }

    return 0;
}