#include <iostream>

using namespace std;

int calculateSquare(int);
inline int calculateCube(int);

namespace Jatin {
char Name[20] = "Jatin Munjal";
int age = 23;
} // namespace Jatin

using namespace Jatin;

int main(int argc, char const *argv[]) {
  /* code */
  int x;
  cout << "Enter a number = ";
  cin >> x;
  cout << "Square of " << x << " is " << (x * x);
  // Name = "Jatin Munjal";
  // age = 23;
  cout << Name;
  cout << age;

  int z = calculateSquare(10);
  cout << z;
  int r = calculateCube(x);
  cout << r;
  return 0;
}

int calculateSquare(int num) {
  int square = num * num;
  return square;
}

int calculateCube(int num) { return (num * num * num); }