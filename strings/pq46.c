// Make a program that inputs user's name & prints it lenght

#include <stdio.h>

int countLenght(char arr[]);

int main() {
  char name[100];
  printf("Enter name: ");
  fgets(name, 100, stdin);

  printf("Lenght of your string is %d\n", countLenght(name));

  return 0;
}

int countLenght(char arr[]) {
  int count = 0;
  for (int i = 1; arr[i] != '\0'; i++) {
    count++;
  }
  return count;
}
