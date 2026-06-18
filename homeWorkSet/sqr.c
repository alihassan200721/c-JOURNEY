#include <stdio.h>
#include <math.h>

float squareRoot(float n); 

int main() {
    float n;
    printf("Enter number: ");
    scanf("%f", &n);

    printf("square Root is: %f \n", squareRoot(n));

    return 0;
}

float squareRoot(float n) {
    float root;
    root = pow(n, 0.5);
    return root;
}
