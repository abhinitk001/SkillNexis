
class Library:
    def __init__(self):
        self.books = []

    def add_book(self, book):
        if book not in self.books:
            self.books.append(book)
            print(f"'{book}' added to the library.")
        else:
            print("Book already exists.")

    def remove_book(self, book):
        if book in self.books:
            self.books.remove(book)
            print(f"'{book}' removed from the library.")
        else:
            print("Book not found.")

    def issue_book(self, book):
        if book in self.books:
            self.books.remove(book)
            print(f"'{book}' issued successfully.")
        else:
            print("Book is unavailable.")

    def return_book(self, book):
        if book not in self.books:
            self.books.append(book)
            print(f"'{book}' returned successfully.")
        else:
            print("This book is already in the library.")

    def display_books(self):
        print("\nAvailable Books:")
        if self.books:
            for book in self.books:
                print("-", book)
        else:
            print("No books available.")


# Create an object
library = Library()

library.add_book("Python Programming")
library.add_book("Data Structures")
library.display_books()

library.issue_book("Python Programming")
library.display_books()

library.return_book("Python Programming")
library.display_books()
