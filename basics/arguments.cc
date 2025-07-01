#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  /* code */
  // Formal Arguments
  // 1. Ordinary Arguments
  int x;
  // 2. Pointer Argument
  int *ptr;
  // 3. Reference Variable
  // Assign the ordinary variable to reference variable
  cin >> x;
  int &ref = x;
  cout << ref++;
  cout << ref;
  return 0;
}