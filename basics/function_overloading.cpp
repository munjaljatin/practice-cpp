// function overloading in c++
#include <iostream>
// using namespace std;

// function Declaration for add() function
int add(int, int);
int add(int, int, int);

// add function
int add(int a, int b) { return (a + b); }

// overloaded the function add
int add(int a, int b, int c) { return (a + b + c); }

int main(int argc, char const *argv[]) {
  /* code */
  int num1, num2;
  int result1 = add(10, 20);
  int result2 = add(10, 20, 30);

  std::cout << "Enter two numbers: " << std::endl;
  std::cin >> num1 >> num2;

  std::cout << result1 << std::endl;
  std::cout << result2 << std::endl;

  std::cout << add(num1, num2) << std::endl;
  std::cout << add(num1, num2, 1);
  return 0;
}
