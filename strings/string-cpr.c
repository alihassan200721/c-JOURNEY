#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "hello";
  char str2[] = "world";

  printf("%s\n", strcpy(str1, str2));

  return 0;
}
