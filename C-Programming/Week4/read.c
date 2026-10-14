#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[50];
    float marks;
};

int main() {
    struct Student s1 = {50, "Abhinit", 43.4};
    struct Student s2;

    FILE *writePtr = fopen("student.dat", "wb");
    if (writePtr == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    fwrite(&s1, sizeof(struct Student), 1, writePtr);
    fclose(writePtr);
    printf("Data successfully written to file.\n\n");

    FILE *readPtr = fopen("student.dat", "rb");
    if (readPtr == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    fread(&s2, sizeof(struct Student), 1, readPtr);
    fclose(readPtr);

    printf("--- Student Details Read From File ---\n");
    printf("Name: %s\n", s2.name);
    printf("Roll No: %d\n", s2.rollno);
    printf("Marks: %.2f\n", s2.marks);

    return 0;
}
