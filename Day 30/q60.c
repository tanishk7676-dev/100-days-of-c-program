#include <stdio.h>

int main() {
    int n, p = 0, N = 0, zero = 0;
    printf("Enter no elements in an array ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        printf("enter the elements of array" );
        scanf("%d", &arr[i]);

        if(arr[i] > 0)
        {
            p++;
        }
        else if(arr[i] < 0)
        {
            N++;
        }
        else
        {
            zero++;
        }
    }

    printf("Positive = %d\n", p);
    printf("Negative = %d\n", N);
    printf("Zero = %d", zero);

    return 0;
}