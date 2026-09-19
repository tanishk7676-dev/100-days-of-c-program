//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols, flag = 1;

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

    // Check diagonal elements
    for(int i = 0; i < rows && i < cols; i++)
    {
        for(int j = i + 1; j < rows && j < cols; j++)
        {
            if(a[i][i] == a[j][j])
            {
                flag = 0;
                break;
            }
        }

        if(flag == 0)
            break;
    }

    if(flag == 1)
        printf("Diagonal elements are distinct");
    else
        printf("Diagonal elements are not distinct");

    return 0;
}