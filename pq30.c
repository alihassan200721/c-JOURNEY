#include <stdatomic.h>
#include <stdint.h>
#include <stdio.h>

float converter(float c);

int main() {
    float c;
    printf("Enter temperature in celsius: ");
    scanf("%f", &c);

    printf("Fahrenheit: %f \n", converter(c));


    return 0;
}

float converter(float c) {
    float f = 0.0;
    f += c * (9.0/5.0) + 32.0;
    return f;
}
