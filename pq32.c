//print n terms of fabonacci sequence...

#include <stdio.h>

int Fibonacci(int n);

int main() {
    printf("%d \n", Fibonacci(6));

    return 0;
}

int Fibonacci(int n) {
    if(n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    int fibNm1 = Fibonacci(n-1);
    int fibNm2 = Fibonacci(n-2);
    int fibN = fibNm1 + fibNm2;

    //printf("Fibonacci of %d is: %d \n", n, fibN);
    return fibN;
}
