#include <stdio.h>

int main() {
    int n, digit, max = 0, maxDigit = 0;

    printf("Enter an integer number ");
    scanf("%d", &n);

    int count[10] = {0};

    while(n > 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for(int i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            maxDigit = i;
        }
    }

    printf("Digit occurring most times = %d", maxDigit);

    return 0;
}
