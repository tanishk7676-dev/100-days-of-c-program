//Check if a matrix is symmetric.
#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols, flag = 1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if(rows != cols)
    {
        printf("Matrix is not symmetric");
        return 0;
    }

    printf("Enter matrix elements:\n");

    // Read matrix
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Check symmetry
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(a[i][j] != a[j][i])
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1)
        printf("Matrix is symmetric");
    else
        printf("Matrix is not symmetric");

    return 0;
}