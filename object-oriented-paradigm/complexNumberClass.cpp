#include <iostream>

class Complex {
private:
  int real;
  int imaginary;

public:
  void setData(int r, int i) {
    real = r;
    imaginary = i;
  }
  void displayData() { std::cout << real << " + " << imaginary << "i"; }
};

int main(int argc, char const *argv[]) {
  /* code */
  // obect of Complex class
  Complex obj;
  obj.setData(2, 3);
  obj.displayData();
  return 0;
}
