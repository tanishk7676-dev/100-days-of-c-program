/*Q69: Find the second largest element in an array.*/
#include <stdio.h>

int main() {
    int n;

    printf("Enter number of element in an array ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements of array ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int second = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    printf("%d", second);

    return 0;
}

