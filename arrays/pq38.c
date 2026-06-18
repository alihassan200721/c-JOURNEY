#include <stdio.h>

int main() {
  float price[3];
  printf("Enter price of first item: ");
  scanf("%f", &price[0]);

  printf("Enter price of second item: ");
  scanf("%f", &price[1]);

  printf("Enter price of third item: ");
  scanf("%f", &price[2]);

  printf("Price = %f\n", price[0] + (0.18 * price[0]));
  printf("Price = %f\n", price[1] + (0.18 * price[1]));
  printf("Price = %f\n", price[2] + (0.18 * price[2]));

  return 0;
}
