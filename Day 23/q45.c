#include <stdio.h>

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    double s = 0.0;
    int num = 2;
    int den = 3;

    for (int i = 0; i < n; i++) {
        s += (double)num / den;
        num += 2;
        den += 4;
    }

    printf("Sum of the series up to %d terms is: %lf\n", n, s);
    return 0;
}