#include <stdio.h>

int main() {
    //even = 1
    //odd = 0

    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    printf("%d \n", a % 2 == 0);


    return 0;
}
