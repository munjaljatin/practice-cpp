#include <iostream>

namespace jatin {
char name[] = "Jatin";
int age = 22;
} // namespace jatin

int main(int argc, char const *argv[]) {
  /* code */
  std::cout << jatin::name << " " << jatin::age;
  return 0;
}
