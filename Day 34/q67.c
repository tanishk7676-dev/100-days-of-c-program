#include <stdio.h>

int main()
{
    int a[100], n, i, x, pos;

    printf("enter number of elements: ");
    scanf("%d", &n);

    printf("enter elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter element to insert: ");
    scanf("%d", &x);

    printf("enter position: ");
    scanf("%d", &pos);

    for(i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos - 1] = x;
    n++;

    printf("array after insertion: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}