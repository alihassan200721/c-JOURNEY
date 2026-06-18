//swap 2 numbers, a && b

#include <stdio.h>

void swap(int *a, int *b);

int main() {
    int n1 = 21;
    int n2 = 22;

    swap(&n1, &n2);

    return 0;
}

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    printf("Swaped: %d, %d \n", *a, *b);
}
