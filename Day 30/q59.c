#include <stdio.h>

int main() {
    int n, e = 0, o = 0;
    printf("Enter no of elements in an array ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter %d number of elements in array",n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0){
            e++;
        }
        else{
            o++;
        }
    }   

    printf("Even = %d\n", e);
    printf("Odd = %d", o);

    return 0;
}