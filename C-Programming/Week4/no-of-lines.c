#include <stdio.h>

int main() {
    FILE *filePtr = fopen("student.txt", "r");
    char ch;
    int lineCount = 0;

    if (filePtr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(filePtr)) != EOF) {
        if (ch == '\n') {
            lineCount++;
        }
    }

    if (lineCount > 0 || ftell(filePtr) > 0) {
        lineCount++;
    }

    fclose(filePtr);

    printf("Total number of lines: %d\n", lineCount);

    return 0;
}
