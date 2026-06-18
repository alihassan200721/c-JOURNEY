//prime number checker

#include <stdio.h>

int main() {
    int n;
    int isPrime = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 2; i * i<= n; i++) {
        if (n % i == 0) {
            isPrime = 0;
        }
    }
    if(isPrime) {
        printf("The number is prime %d \n", n);
    } else {
        printf("The number is not prime %d \n", n);
    }


    return 0;
}
