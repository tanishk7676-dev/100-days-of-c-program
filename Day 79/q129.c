//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>

int main() {
    FILE *file;
    int num;
    int sum = 0;
    int count = 0;
    float average;

    file = fopen("numbers.txt", "r");

    if (file == NULL) {
        printf("Error opening file.");
        return 1;
    }

    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(file);

    if (count > 0) {
        average = (float)sum / count;

        printf("Sum: %d\n", sum);
        printf("Average: %.2f", average);
    } else {
        printf("File contains no numbers.");
    }

    return 0;
}
