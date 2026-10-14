#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    char department[30];
    float salary;
} Employee;

void addEmployee() {
    Employee emp;
    FILE *fp = fopen("employees.dat", "ab");
    
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }
    
    printf("\n--- Add New Employee ---\n");
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    getchar(); // Clear newline buffer
    
    printf("Enter Name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    emp.name[strcspn(emp.name, "\n")] = '\0'; // Remove newline character
    
    printf("Enter Department: ");
    fgets(emp.department, sizeof(emp.department), stdin);
    emp.department[strcspn(emp.department, "\n")] = '\0';
    
    printf("Enter Salary: ");
    scanf("%f", &emp.salary);
    
    fwrite(&emp, sizeof(Employee), 1, fp);
    fclose(fp);
    
    printf("Employee added successfully!\n");
}

void displayEmployees() {
    Employee emp;
    FILE *fp = fopen("employees.dat", "rb");
    int count = 1;
    
    if (fp == NULL) {
        printf("\nNo records found! Add an employee first.\n");
        return;
    }
    
    printf("\n-------------------------------------------------------------\n");
    printf("%-5s %-10s %-20s %-15s %-10s\n", "S.No", "ID", "Name", "Department", "Salary");
    printf("-------------------------------------------------------------\n");
    
    while (fread(&emp, sizeof(Employee), 1, fp) == 1) {
        printf("%-5d %-10d %-20s %-15s INR %.2f\n", count++, emp.id, emp.name, emp.department, emp.salary);
    }
    printf("-------------------------------------------------------------\n");
    
    fclose(fp);
}

int main() {
    int choice;
    
    while (1) {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                printf("Exiting system. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice! Please enter a number between 1 and 3.\n");
        }
    }
    
    return 0;
}
