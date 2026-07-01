// create a string "firstName" & "lastName" to store details of user & print all
// the characters using a loop;

#include <stdio.h>

int main() {
  char firstName[] = "Ali";
  char lastName[] = "Hassan";
  int size_FN = sizeof(firstName) / sizeof(firstName[0]);
  int size_LN = sizeof(lastName) / sizeof(lastName[0]);

  for (int i = 0; i < size_FN; i++) {
    printf("%c", firstName[i]);
  }

  for (int i = 0; i < size_LN; i++) {
    printf("%c", lastName[i]);
  }

  return 0;
}
