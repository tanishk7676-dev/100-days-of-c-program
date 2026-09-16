//Read and print a matrix. c code
#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

   
    printf("Enter matrix elements:\n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    
    printf("Matrix is:\n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
  