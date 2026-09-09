#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // print numbers from (n - i + 1) to n
        for (int y = n - i + 1; y <= n; y++) {
            printf("%d", y);
        }

        printf("\n");
    }

    return 0;
}