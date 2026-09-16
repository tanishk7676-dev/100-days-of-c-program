#include <stdio.h>

int main()
{
    int a[100], n, k, i, j, temp;

    printf("enter number of elements: ");
    scanf("%d", &n);

    printf("enter elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter number of rotations: ");
    scanf("%d", &k);

    k = k % n;

    for(i =0; i<k; i++)
    {
        temp = a[n - 1];

        for(j = n - 1; j > 0; j--)
        {
            a[j] = a[j - 1];
        }

        a[0] = temp;
    }

    printf("array after rotation: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}