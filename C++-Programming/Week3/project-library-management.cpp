
#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    int id;
    string title;
    string author;
    bool issued;

    Book() {
        id = 0;
        title = "";
        author = "";
        issued = false;
    }

    void input() {
        cout << "Enter Book ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);
    }

    void display() {
        cout << "\nBook ID: " << id;
        cout << "\nTitle: " << title;
        cout << "\nAuthor: " << author;
        cout << "\nStatus: "
             << (issued ? "Issued" : "Available")
             << "\n";
    }

    void issueBook() {
        if (!issued) {
            issued = true;
            cout << "Book issued successfully!\n";
        } else {
            cout << "Book is already issued!\n";
        }
    }
};

int main() {
    Book books[100];
    int count = 0;
    int choice;

    do {
        cout << "\n===== LIBRARY MENU =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            if (count < 100) {
                books[count].input();
                count++;
                cout << "Book added successfully!\n";
            } else {
                cout << "Library is full!\n";
            }
            break;

        case 2:
            if (count == 0) {
                cout << "No books available.\n";
            } else {
                for (int i = 0; i < count; i++) {
                    books[i].display();
                }
            }
            break;

        case 3: {
            int searchId;
            bool found = false;

            cout << "Enter Book ID to issue: ";
            cin >> searchId;

            for (int i = 0; i < count; i++) {
                if (books[i].id == searchId) {
                    books[i].issueBook();
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Book not found!\n";
            }
            break;
        }

        case 4:
            cout << "Exiting Library System.\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}
