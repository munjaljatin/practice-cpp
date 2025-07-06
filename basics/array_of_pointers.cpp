#include <stdio.h>

void input(int **, int, int[]);

int main(int argc, char const *argv[]) {
  /* code */
  int *ptr[4] = {NULL};
  int a[5], b[6], c[7], d[8];
  ptr[0] = a;
  ptr[1] = b;
  ptr[2] = c;
  ptr[3] = d;
  int size[] = {
      5,
      6,
      7,
      8,
  };
  input(ptr, 4, size);
  return 0;
}

void input(int **ptr, int s, int length[]) {
  // for (int i = 0; i < length[i]; i++) {
  //   // scanf("%d")
  //   scanf("%d", *(ptr + i));
  // }

  for (int i = 0; i < s; i++) {
    printf("Enter the %d values\n", length[i]);
    for (int j = 0; j < length[i]; j++) {
      scanf("%d", *(ptr + i));
    }
  }
}