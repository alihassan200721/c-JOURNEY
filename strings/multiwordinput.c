#include <stdio.h>

int main(void) {
  char str[100];
  printf("Enter a sentence: ");
  fgets(str, 100, stdin);
  puts(str);

  return 0;
}
