#include <iostream>

class Complex {
private:
  int real;
  int imaginary;

public:
  // Declaration of member functions
  void setData(int, int);
  void displayData();
  Complex add(Complex);
  void add2(Complex, Complex);
};

// Definition of member functions
void Complex::setData(int r, int i) {
  real = r;
  imaginary = i;
}

void Complex::displayData() {
  std::cout << real << " + " << imaginary << "i" << std::endl;
}

Complex Complex::add(Complex C) {
  Complex temp;
  temp.real = real + C.real;
  temp.imaginary = imaginary + C.imaginary;
  return temp;
}

void Complex::add2(Complex c1, Complex c2) {
  // return ((c1.real + c2.real) + (c1.imaginary + c2.imaginary));
  // Complex add;
  real = c1.real + c2.real;
  imaginary = c1.imaginary + c2.imaginary;
  // return add;
}
int main(int argc, char const *argv[]) {
  /* code */
  // obect of Complex class
  Complex obj1, obj2, obj3;
  obj1.setData(10, 20);
  obj1.displayData();
  obj2.setData(20, 10);
  obj2.displayData();
  obj3 = obj1.add(obj2);
  obj3.displayData();
  Complex obj4;
  obj4.add2(obj1, obj2);
  obj4.displayData();
  return 0;
}
