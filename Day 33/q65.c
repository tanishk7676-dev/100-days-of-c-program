#include <stdio.h>

int main() {
    int n, search;

    printf("Enter number of element in an array ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements of sorted array ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search ");
    scanf("%d", &search);

    int low = 0;
    int high = n - 1;
    int found = 0;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == search) {
            printf("Element found at index %d", mid);
            found = 1;
            break;
        }
        else if(search < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if(found == 0)
        printf("Element not found");

    return 0;
}