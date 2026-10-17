#include <bits/stdc++.h>
using namespace std;

void calculatePercentages(const int marks[], double percentages[], int totalStudents, int maxMarksPerStudent) {
    for (int i = 0; i < totalStudents; i++) {
        percentages[i] = (static_cast<double>(marks[i]) / maxMarksPerStudent) * 100.0;
    }
}

double calculateClassAverage(const double percentages[], int totalStudents) {
    double sum = 0;
    for (int i = 0; i < totalStudents; i++) {
        sum += percentages[i];
    }
    return sum / totalStudents;
}

int findHighestScorer(const int marks[], int totalStudents) {
    int highestIndex = 0;
    for (int i = 1; i < totalStudents; i++) {
        if (marks[i] > marks[highestIndex]) {
            highestIndex = i;
        }
    }
    return highestIndex;
}

void displayReport(const string names[], const int marks[], const double percentages[], int totalStudents, int maxMarks) {
    cout << "               STUDENT REPORT                \n";
    cout << left << setw(15) << "Name" << setw(15) << "Marks Obtained" << setw(15) << "Percentage" << "\n";
    
    cout << fixed << setprecision(2);
    
    for (int i = 0; i < totalStudents; i++) {
        cout << left << setw(15) << names[i] 
             << setw(1) << marks[i] << "/" << setw(13) << maxMarks 
             << percentages[i] << "%\n";
    }
}

int main() {
    const int MAX_STUDENTS = 5;
    const int MAX_MARKS_PER_STUDENT = 500;

    string names[MAX_STUDENTS] = {"Abhinit", "Priyanka Chopra", "Rahul Gandhi", "Shakuni", "Vikram Betal"};
    int totalMarks[MAX_STUDENTS] = {412, 465, 389, 442, 320};
    double percentages[MAX_STUDENTS];

    calculatePercentages(totalMarks, percentages, MAX_STUDENTS, MAX_MARKS_PER_STUDENT);
    double classAverage = calculateClassAverage(percentages, MAX_STUDENTS);
    int topStudentIndex = findHighestScorer(totalMarks, MAX_STUDENTS);

    displayReport(names, totalMarks, percentages, MAX_STUDENTS, MAX_MARKS_PER_STUDENT);

    cout << "CLASS INSIGHTS:\n";
    cout << "-> Class Average Performance: " << classAverage << "%\n";
    cout << "-> Highest Scorer: " << names[topStudentIndex] 
         << " (" << totalMarks[topStudentIndex] << "/" << MAX_MARKS_PER_STUDENT << ")\n";

    return 0;
}
