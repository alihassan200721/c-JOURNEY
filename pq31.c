#include <stdio.h>

float PercentageCal(float science, float maths, float urdu);

int main() {
    float s, m, u;
    printf("Enter Science marks: ");
    scanf("%f", &s);
    printf("Enter Maths marks: ");
    scanf("%f", &m);
    printf("Enter Urdu marks: ");
    scanf("%f", &u);

    printf("Your percentage is: %f \n", PercentageCal(s, m, u));

    return 0;
}


float PercentageCal(float science, float maths, float urdu) {
    float sum, percentage;
    sum = science + maths + urdu;
    percentage = sum/3.0;

    return percentage;
}
