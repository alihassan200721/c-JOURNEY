#include <stdio.h>

void square(int n);
void _square(int *n);


int main() {
    int num = 5;
    square(num);
    printf("Number is = %d \n", num);

    _square(&num);
    printf("Number is = %d \n", num);

    return 0;
}

//call by value
void square(int n) {
    n = n * n;
    printf("square = %d\n", n);
}


//call by refernce
void _square(int *n) {
    *n = (*n) * (*n);
    printf("Square = %d \n", *n);
}
