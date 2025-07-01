#include <iostream>

using namespace std;

// add function Declaration
// function decalaration is very important
// setting the default value to an argument
inline int add(int, int, int = 0);

int main(int argc, char const *argv[]) {
  /* code */
  int x, y;
  cout << "Enter the first number = ";
  cin >> x;
  cout << "Enter the second number = ";
  cin >> y;
  int z = 10;
  int a = add(x, y);
  int b = add(x, y, z);
  cout << a;
  cout << b;
  return 0;
}

// add function definition
int add(int num1, int num2, int num3) { return (num1 + num2 + num3); }