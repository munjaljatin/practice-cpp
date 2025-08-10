#include <iostream>
#include <string>
using namespace std;

// Book Structure
struct Book {

private:
  // Member Variables
  int bookID;
  char bookTitle[40];
  char bookAuthor[20];
  float bookPrice;

  // Member functions
  // input method
public:
  void inputBookData() {
    cout << "Enter the Book Details" << endl;
    cin >> bookID;
    if (bookID < 0) {
      cout << "Please Enter a valid Book ID!" << endl;
      cin >> bookID;
    }
    cin.ignore();
    cin.getline(bookTitle, 40);
    cin.getline(bookAuthor, 20);
    cin >> bookPrice;
  }

  // display method
  void displayBookData() {
    cout << "Book ID: " << bookID << endl;
    cout << "Book Title: " << bookTitle << endl;
    cout << "Book Author: " << bookAuthor << endl;
    cout << "Book Price: " << bookPrice << endl;
  }
};

// Main Method
int main(int argc, char const *argv[]) {
  /* code */
  Book b1;
  b1.displayBookData();
  Book b2;
  b2.inputBookData();
  b2.displayBookData();
  return 0;
}
