#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  /* code */
  char ch; // Declation statement or SMA(Static Memory Allocation) Variable

  int *ptr = (int *)malloc(sizeof(int));
  *ptr = 10;
  printf("%d\n%d", ptr, *ptr);
  free(ptr);
  return 0;
}
