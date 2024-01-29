#include <iostream>
struct Book {
private:
  int bookID;
  float bookPrice;
  char bookTitle[50];

  // member function
public:
  void displayBookInfo() {
    std::cout << "Book Title: " << bookTitle << std::endl;
    std::cout << "Book ID: " << bookID << std::endl;
    std::cout << "Book Price: " << bookPrice << std::endl;
  }

  void inputBook() {
    // Book b;
    std::cout << "Please, Enter the Book id, price, and title:" << std::endl;
    std::cin >> bookID;
    std::cin >> bookPrice;
    std::cin.ignore();
    std::cin.getline(bookTitle, 50);
    // return
  }
};

// struct Book inputBook(){
//     struct Book b;
//     std::cout << "Please, Enter the Book ID, Price, and Book title" <<
//     std::endl; std::cin >> b.bookId; std::cin >> b.price;
//     std::cin.getline(b.title, 20);
//     return b;
// }

// void displayBook(struct Book b){
//     // Book b;
//     std::cout << "Book Title: " << b.title << std::endl;
//     std::cout << "Book ID: " << b.bookId << std::endl;
//     std::cout << "Book Price: " << b.price;
// }

int main(int argc, char const *argv[]) {
  /* code */
  struct Book b;
  Book b2;
  b2.inputBook();
  b2.displayBookInfo();
  b.inputBook();
  b.displayBookInfo();
  return 0;
}