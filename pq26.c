#include <stdio.h>

float calulateCircle(float n);
float calulateSquare(float n);
float calulateRectangle(float n, float x);


int main() {
    char ch;
    float n, x;
    float a = 0.0;

    printf("calulate are for? C/S/R: ");
    scanf("%c", &ch);

    if (ch == 'c') {
        printf("Enter radius: ");
        scanf("%f", &n);
        a = calulateCircle(n);
        printf("%f \n", a); 
    } else if (ch == 's') {
        printf("Enter side: ");
        scanf("%f", &n);
        a = calulateSquare(n);
        printf("%f \n", a);
    } else if (ch == 'r') {
        printf("Enter side a: ");
        scanf("%f", &n);
        printf("Enter side b: ");
        scanf("%f", &x);
        a = calulateRectangle(n, x);
        printf("%f \n", a);
    } else {
        printf("Inavlid input!");
    }

    return 0;
}

int calulateCircle(float n) {
    float area;
    area = 3.14 * (n*n);
    return area;
}

int calulateSquare(float n) {
    float area;
    area = n * n;
    return area;
}


int calulateRectangle(float n, float x) {
    float area;
    area = n * x;
    return area;
}

