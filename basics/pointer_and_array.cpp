#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// function declaration for input and output
void input(int *, int);
void output(int *, int);
float average(int *, int);

int main(int argc, char const *argv[]) {
  /* code */
  // Pointers and Arrays
  int marks[] = {10, 20, 30, 40, 50};
  int *ptr = NULL;
  ptr = marks;
  // cout << ptr << "  " << (ptr + 1) << "  " << (ptr + 2);

  // cout << endl << sizeof(marks);
  int size_of_array = sizeof(marks) / sizeof(marks[0]);

  // Displaying the addresses of marks array
  for (int i = 0; i < size_of_array; i++) {
    cout << (ptr + i) << "\n";
  }

  // Displaying the list of marks array by dereferencing the pointer
  for (int i = 0; i < size_of_array; i++) {
    cout << *(ptr + i) << "  ";
  }

  for (int i = 0; i < size_of_array; i++)
    cout << ptr[i] << "  ";

  int a[10];
  input(a, 10);
  output(a, 10);
  cout << "Average of entered 10 values is " << average(a, 10);

  // DMA - Dynamic Memory Allocation
  char *ch = NULL;
  ch = (char *)malloc(5 * sizeof(char));
  ch = "Jatin";
  return 0;
}

void input(int *ptr, int size) {
  cout << "Enter the values in the array" << endl;
  for (int i = 0; i < size; i++) {
    // cin >> ptr[i];
    scanf("%d", (ptr + i));
  }
}

void output(int *ptr, int size) {
  for (int i = 0; i < size; i++) {
    cout << *(ptr + i) << "  ";
  }
}

float average(int *ptr, int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum = sum + *(ptr + i);
  }
  return (sum / size);
}