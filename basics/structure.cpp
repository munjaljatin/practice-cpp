#include <iostream>
#include <stdio.h>
#include <string.h>

// function Declaration
struct Book input(void);

using namespace std;

// Structure in C/C++
// Book structure
struct Book {
  int bookID;
  char bookTitle[30];
  float bookPrice;
  char bookPublisher[20];
  char bookAuthor[20];
};

int main(int argc, char const *argv[]) {
  /* code */
  Book b1;
  b1.bookID = 1001;
  strcpy(b1.bookTitle, "Can't Hurt Me!");
  // fgets(b1.bookTitle, 20);
  b1.bookPrice = 350.75;
  cout << sizeof(b1) << endl;
  cout << sizeof(b1.bookID) << endl;
  cout << sizeof(b1.bookTitle) << endl;
  cout << sizeof(b1.bookPrice) << endl;
  cout << sizeof(b1.bookPublisher) << endl;
  cout << sizeof(b1.bookAuthor);

  struct Book b2;
  b2 = {1002, "Can't Hurt Me", 375, "David Goggins", "Publisher"};
  cout << b2.bookAuthor << endl;
  cout << b2.bookTitle;

  Book b3;
  b3.bookID = 1010;
  strcpy(b3.bookTitle, "The Almanack of Naval Ravikant");
  b3.bookPrice = 350.65;
  strcpy(b3.bookPublisher, "Publisher");
  strcpy(b3.bookAuthor, "Naval Ravikant");

  cout << b3.bookTitle << endl;
  // printf("%d\n", b3.bookPrice);
  printf("%f\n", b3.bookPrice);
  printf("%d\n", b3.bookID);

  Book newBook;
  newBook = input();
  cout << newBook.bookID << " " << newBook.bookTitle << " " << newBook.bookPrice
       << " " << newBook.bookPublisher << " " << newBook.bookAuthor;

  // Pointer and Structure
  struct Book history;
  struct Book *ptr = NULL;
  ptr = &history;
  (*ptr).bookID = 100109;
  cout << (*ptr).bookID;
  return 0;
}

Book input() {
  Book bk;
  printf("Enter the Book ID, Title, Price, Publisher, Author");
  scanf("%d", &bk.bookID);
  fgets(bk.bookTitle, 30, stdin);
  scanf("%f", &bk.bookPrice);
  fgets(bk.bookPublisher, 20, stdin);
  fgets(bk.bookAuthor, 20, stdin);
  return bk;
}