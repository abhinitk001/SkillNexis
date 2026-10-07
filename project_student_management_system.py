import csv

FILE = "students.csv"


# Add student
def add_student():
    roll = input("Enter roll number: ")
    name = input("Enter student name: ")
    marks = input("Enter marks: ")

    with open(FILE, "a", newline="") as file:
        writer = csv.writer(file)
        writer.writerow([roll, name, marks])

    print("Student added successfully!")


# Search student
def search_student():
    roll = input("Enter roll number to search: ")

    with open(FILE, "r", newline="") as file:
        reader = csv.reader(file)

        for row in reader:
            if row[0] == roll:
                print("Roll Number:", row[0])
                print("Name:", row[1])
                print("Marks:", row[2])
                return

    print("Student not found!")


# Delete student
def delete_student():
    roll = input("Enter roll number to delete: ")

    students = []

    with open(FILE, "r", newline="") as file:
        reader = csv.reader(file)

        for row in reader:
            if row[0] != roll:
                students.append(row)

    with open(FILE, "w", newline="") as file:
        writer = csv.writer(file)
        writer.writerows(students)

    print("Student deleted successfully!")


# Display all students
def display_students():
    with open(FILE, "r", newline="") as file:
        reader = csv.reader(file)

        for row in reader:
            print("Roll:", row[0], "| Name:", row[1], "| Marks:", row[2])


# Main menu
while True:

    print("\n--- STUDENT MANAGEMENT SYSTEM ---")
    print("1. Add Student")
    print("2. Search Student")
    print("3. Delete Student")
    print("4. Display Students")
    print("5. Exit")

    choice = input("Enter your choice: ")

    if choice == "1":
        add_student()

    elif choice == "2":
        search_student()

    elif choice == "3":
        delete_student()

    elif choice == "4":
        display_students()

    elif choice == "5":
        print("Program ended.")
        break

    else:
        print("Invalid choice!")