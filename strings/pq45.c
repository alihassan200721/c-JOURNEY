// ask the user to enter their FirstName & print it back to them;

#include <stdio.h>

int main() {
  char FullName[50];
  printf("Enter your full name: ");
  scanf("%s", FullName);

  printf("%s\n", FullName);
}
