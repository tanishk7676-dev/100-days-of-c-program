//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>

int main() {
    FILE *source, *destination;
    char sourceName[100], destinationName[100];
    int ch;

    scanf("%s", sourceName);
    scanf("%s", destinationName);

    source = fopen(sourceName, "r");

    if (source == NULL) {
        printf("Error opening source file.");
        return 1;
    }

    destination = fopen(destinationName, "w");

    if (destination == NULL) {
        printf("Error opening destination file.");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully.");

    return 0;
}