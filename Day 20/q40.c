#include <stdio.h>

int main() {
    char s[100];
    printf("Enter binary number : \n");
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '0')
            s[i] = '1';
        else if (s[i] == '1')
            s[i] = '0';
    }

    printf("%s\n", s);
    return 0;
}