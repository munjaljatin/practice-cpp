#include <iostream>

class Item {
private:
  int a, b;
  static int k;

public:
  // Instace Methods for setting the values
  void set_a(int x) { a = x; }
  void set_b(int x) { b = x; }

  // static method
  static void set_k(int x) { k = x; }

  // Instance Methods for getting the values
  int get_a() { return a; }
  int get_b() { return b; }

  // static method
  static int get_k() { return k; }
};

// definition of static member variable k
int Item::k;

int main(int argc, char const *argv[]) {
  /* code */
  Item obj1, obj2;
  obj1.set_a(10);
  obj1.set_b(20);
  std::cout << obj1.get_a() << " " << obj1.get_b();
  std::cout << std::endl << obj1.get_k();
  Item::set_k(20);
  std::cout << std::endl << Item::get_k();
  return 0;
}
