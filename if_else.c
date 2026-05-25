#include <stdio.h>

int main() {

    int age; 
    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Adult \n");
        printf("You can vote \n");
        printf("You can drive \n");
    }
    else if (age > 13 && age < 18) {
        printf("Teenager \n");
    }
    else {
        printf("You are not an Adult! \n");
    }
    return 0;
}
