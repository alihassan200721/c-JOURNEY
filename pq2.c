#include <stdio.h>

int main() {
    
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    
    float r_square = r * r;
    float area = 3.14 * r_square;

    printf("Area of cricle is %f \n", area);

    return 0;
}
