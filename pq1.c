#include <stdio.h>

int main() {
  int a;

  printf("Value: ");
  scanf("%d", &a);

  int area = a * a;
  printf("Area is %d \n", area);

  return 0;
}
