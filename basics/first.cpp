#include <iostream>

using namespace std;

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

  return 0;
}
