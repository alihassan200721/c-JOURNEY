//find out the maximum between two number

#include <stdio.h>

int max(int *a, int *b);

int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Larger = %d\n", max(&a,&b));


    return 0;
}


int max(int *a, int *b) {
    if (*a > *b) {
        return *a;
    } else {
        return *b;
    }
}
