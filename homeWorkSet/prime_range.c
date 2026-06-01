#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;

    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        if (i <= 1)
            continue; // 0 and 1 are not prime

        isPrime = 1; // assume number is prime

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; // not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d \n", i);
        }
    }

    return 0;
}
