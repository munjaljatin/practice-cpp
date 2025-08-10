#include <iostream>

using namespace std;

class Complex {
  // Member variables
  int real;
  int imaginary;

public:
  void setData(int r, int i) {
    real = r;
    imaginary = i;
  }

  void displayData() { cout << real << " + " << imaginary << "i"; }
};

int main(int argc, char const *argv[]) {
  /* code */
  // creating a object of complex class
  Complex obj;
  obj.setData(10, 20);
  obj.displayData();
  return 0;
}
