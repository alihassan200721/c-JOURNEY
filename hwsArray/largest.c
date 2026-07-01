// print out the largest number inside of an array

#include <stdio.h>

int main() {
  int arr[5];
  int *ptr = &arr[0];
  int largest;
  largest = *ptr;

  // taking array as input;
  for (int i = 0; i < 5; i++) {
    printf("%d index: ", i);
    scanf("%d", &arr[i]);
  }

  // loop for checking the largest number
  for (int i = 0; i < 5; i++) {
    if (*(ptr + i) > largest) {
      largest = *(ptr + i);
    }
  }
  printf("Largest number == %d\n", largest);

  return 0;
}
