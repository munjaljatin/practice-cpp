#include <stdio.h>

// int add(int, int);
// float add(float, float);

int main(int argc, char const *argv[]) {
  /* code */
  int res = add(20, 20);
  printf("%d", res);
  return 0;
}

int add(int a, int b) { return (a + b); }
float add1(float a, float b) { return (a + b); }