#include <stdio.h>

int main() {
    FILE *filePtr = fopen("notes.txt", "a");

    if (filePtr == NULL) {
        printf("Error opening file for appending!\n");
        return 1;
    }

    fprintf(filePtr, "This line is being appended to the file.\n");

    fclose(filePtr);
    printf("Data successfully appended to the file.\n");

    return 0;
}
