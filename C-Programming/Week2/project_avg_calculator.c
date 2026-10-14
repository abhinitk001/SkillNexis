#include <stdio.h>

void inputMarks(float marks[], int totalSubjects) {
    for (int i = 0; i < totalSubjects; i++) {
        printf("Enter marks for Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
    }
}

float calculateAverage(float marks[], int totalSubjects) {
    float sum = 0.0;
    for (int i = 0; i < totalSubjects; i++) {
        sum += marks[i];
    }
    return sum / totalSubjects;
}

void displayResult(float average) {
    printf("\n--- Final Result ---\n");
    printf("The student's average mark is: %.2f\n", average);
}

int main() {
    int subjects;

    printf("How many subjects does the student have? ");
    scanf("%d", &subjects);

    float studentMarks[subjects];

    inputMarks(studentMarks, subjects);
    float avg = calculateAverage(studentMarks, subjects);
    displayResult(avg);

    return 0;
}
