#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int matrix[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int distinct = 1;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }

        if (distinct == 0) {
            break;
        }
    }

    if (distinct)
        printf("Distinct");
    else
        printf("Not Distinct");

    return 0;
}