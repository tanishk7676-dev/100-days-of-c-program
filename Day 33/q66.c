#include <stdio.h>

int main()
{
    int a[100], n, i, x, pos;

    printf("enter number of elements: ");
    scanf("%d", &n);

    printf("enter sorted elements: ");

    for(i = 0; i < n; i++)
    {
        
        scanf("%d", &a[i]);
    }

    printf("enter element to insert: ");
    scanf("%d", &x);

    pos = n;

    for(i = 0; i < n; i++)
    {
        if(x < a[i])
        {
            pos = i;
            break;
        }
    }

    for(i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = x;
    n++;

    printf("array after insertion: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}