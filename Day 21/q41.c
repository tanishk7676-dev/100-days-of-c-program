#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 10) {
        printf("%d\n", n);
        return 0;
    }

    int t = n, l, f, d = 0;

    l = n % 10;

    while (t > 0) {
        f = t % 10;
        t /= 10;
        d++;
    }

    int p = 1;
    for (int i = 1; i < d; i++)
        p *= 10;

    int m = n % p;
    m /= 10;

    int r = l * p + m * 10 + f;

    printf("%d\n", r);
    return 0;
}
    

