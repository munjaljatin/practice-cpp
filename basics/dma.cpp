#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  /* code */
  char ch; // Declation statement or SMA(Static Memory Allocation) Variable

  int *ptr = (int *)malloc(sizeof(int));
  *ptr = 10;
  printf("%d\n%d", ptr, *ptr);
  free(ptr);

  int *pt = NULL;
  int size = 0;
  printf("Enter the size of array = ");
  scanf("%d", &size);
  pt = (int *)calloc(size, sizeof(int));
  printf("Enter the %d values in the array\n", size);
  for (int i = 0; i < size; i++) {
    scanf("%d", pt + i);
  }
  for (int i = 0; i < size; i++) {
    printf("%d ", *(pt + i));
  }

  // freeing the dynamic memory space
  free(pt);
  return 0;
}
