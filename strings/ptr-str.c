#include <stdio.h>

int main() {
  char *canChange = "Hello world!";
  puts(canChange);

  canChange = "Hello!";
  puts(canChange);

  char canNotChange[] = "Hello World!";
  puts(canNotChange);

  // canNotChange[] = "hi";
  // puts(canNotChange); // can not the string this way!

  return 0;
}
