//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>

int main() {
    FILE *file;
    int n, roll;
    char name[50];
    float marks;

    file = fopen("students.txt", "w");

    if (file == NULL) {
        printf("Error opening file.");
        return 1;
    }

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", name);
        scanf("%d", &roll);
        scanf("%f", &marks);

        fprintf(file, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(file);

    file = fopen("students.txt", "r");

    if (file == NULL) {
        printf("Error opening file.");
        return 1;
    }

    while (fscanf(file, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s\n", name);
        printf("Roll Number: %d\n", roll);
        printf("Marks: %.2f\n\n", marks);
    }

    fclose(file);

    return 0;
}