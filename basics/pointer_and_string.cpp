#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[]) {
  /* code */
  // Pointer and Strings in C/C++
  char ch[10] = {'J', 'a', 't', 'i', 'n'};
  int l = length(&ch[0]);

  return 0;
}

int length(int *ptr) {
  int count = 0;
  for (int i = 0; i != '\0'; i++)
    count++;
  return count;
}