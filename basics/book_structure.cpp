#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

// Function Declarations
struct Book input();
void Display(struct Book);

// Book Structure Definition
struct Book {
  int bookID;
  char bookTitle[30];
  char bookAuthor[20];
  float bookPrice;
};

int main(int argc, char const *argv[]) {
  /* code */
  struct Book b1;
  b1 = input();
  Display(b1);
  return 0;
}

// Functions that manipulates the Book structure
struct Book input() {
  Book book;
  cout << "Enter the Book ID = ";
  cin >> book.bookID;
  cout << "Enter the Book Title => ";
  fflush(stdin);
  fgets(book.bookTitle, 30, stdin);
  cout << "Enter the Book Author => ";
  fflush(stdin);
  fgets(book.bookAuthor, 20, stdin);
  cout << "Enter the Book Price = ";
  cin >> book.bookPrice;
  cout << "\n";
  return book;
}

void Display(struct Book book) {
  cout << "Book ID = " << book.bookID << endl;
  cout << "Book Title => " << book.bookTitle << endl;
  cout << "Book Author => " << book.bookAuthor << endl;
  cout << "Book Price = " << book.bookPrice << endl;
}