#include <iostream>

// #define endl nl

class Book {
private:
  int bookID;
  char bookTitle[40];
  float bookPrice;

public:
  void inputBookInfo();
  void displayBookInfo();
};

void Book::inputBookInfo() {

  std::cout << "Enter Book ID: ";
  std::cin >> bookID;
  // validating the Book id number
  if (bookID < 0) {
    bookID = -(bookID);
  }

  // entering the book title in the bookTitle[] char array
  std::cout << "Enter the Book Title: ";
  std::cin.ignore();
  std::cin.getline(bookTitle, 40);

  // entering the bookPrice in the bookPrice data member variable
  std::cout << "Enter the Book Price : ";
  std::cin >> bookPrice;
}

// Definition of diplayBookInfo() function
void Book::displayBookInfo() {
  std::cout << "\nHere's your book information\n";
  std::cout << "======================================" << std::endl
            << std::endl;
  std::cout << "Book ID: " << bookID << std::endl;
  std::cout << "Book Title: " << bookTitle << std::endl;
  std::cout << "Book Price: " << bookPrice << std::endl << std::endl;
  std::cout << "======================================";
}

int main(int argc, char const *argv[]) {
  /* code */
  Book b1;
  b1.inputBookInfo();
  b1.displayBookInfo();
  return 0;
}
