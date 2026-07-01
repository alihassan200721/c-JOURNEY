#include <stdio.h>

int occ(int arr[], int size, int x);

int main() {
  int arr[6] = {21, 33, 10, 22, 22, 22};
  int size = sizeof(arr) / sizeof(arr[0]);
  int x;
  printf("Enter the number: ");
  scanf("%d", &x);

  printf("%d\n", occ(arr, size, x));

  return 0;
}

int occ(int arr[], int size, int x) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] == x) {
      count++;
    }
  }
  return count;
}
