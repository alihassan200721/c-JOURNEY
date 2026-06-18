#include <stdio.h>

int main() {
    int start, end;
    printf("Enter start: ");
    scanf("%d", &start);

    printf("enter end: ");
    scanf("%d", &end);

    printf("Prime number between %d and %d are \n", start, end);

    for(int n = start; n <=end; n++) {
        if(n < 2) {
            continue;
        }
        int isPrime = 1;
        for(int i = 2; i + i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime) {
            printf("%d \n", n);
        }
    }
    printf("\n");
    return 0;

}
