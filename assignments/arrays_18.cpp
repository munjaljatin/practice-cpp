#include <iostream>

using namespace std;

// Finding the Smallest element in the array
int findSmallest(int *arr, int length) {
  int small = arr[0];
  for (int i = 0; i < length; i++) {
    if (arr[i] < small) {
      small = arr[i];
    }
  }
  return small;
}

int main(int argc, char const *argv[]) {
  /* code */

  int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, -1};
  int even = 0;
  int odd = 0;
  int length = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < length; i++) {
    if (arr[i] % 2 == 0) {
      even = even + arr[i];
    } else {
      odd = odd + arr[i];
    }
  }
  cout << even << " " << odd << " ";
  cout << findSmallest(arr, length);
  return 0;
}
