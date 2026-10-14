//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int last[256];

    for (int i = 0; i < 256; i++) {
        last[i] = -1;
    }

    int start = 0;
    int maxLength = 0;

    for (int i = 0; s[i] != '\0'; i++) {

        if (last[(unsigned char)s[i]] >= start) {
            start = last[(unsigned char)s[i]] + 1;
        }

        last[(unsigned char)s[i]] = i;

        int currentLength = i - start + 1;

        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    printf("%d", maxLength);

    return 0;
}