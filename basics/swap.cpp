#include <stdio.h>

// swap function declaration
void swap(int *, int *);

int main(int argc, char const *argv[]) {
  /* code */
  int num1, num2;
  printf("Enter Two numbers:\n");
  scanf("%d %d", &num1, &num2);
  // swap function call
  swap(&num1, &num2);
  printf("%d %d", num1, num2);
  return 0;
}

void swap(int *p, int *q) {
  int temp;
  temp = *p;
  *p = *q;
  *q = temp;
}