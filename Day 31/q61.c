#include <stdio.h>

int main() {
    int n, search, found = 0;
    printf("Enter number of elements in an array : ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        printf("Enter the elements of array ");
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &search);

    for(int i = 0; i < n; i++) {
        if(arr[i] == search) {
            printf("Element found at index %d", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Element not found");
    }
    return 0;
}