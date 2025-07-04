#include <iostream>
#include <stdio.h>
#include <string.h>

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
  return 0;
}
