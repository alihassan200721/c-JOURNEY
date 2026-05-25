#include <stdio.h>

int main() {
    int num, original, sum;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    original = num;

    int a = num % 10;
    num = num / 10;

    int b = num % 10;
    num = num / 10;

    int c = num % 10;

    sum = (a*a*a)+(b*b*b)+(c*c*c);

    if (sum == original) {
        printf("Armstrong Number \n");
    }

    else {
        printf("Not an Armstrong Number \n");
    }
    
    return 0;
}
