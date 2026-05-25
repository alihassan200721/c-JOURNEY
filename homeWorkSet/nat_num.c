//check if the given number is natural number or not
//--------------------------------------------------------

#include <stdio.h>

int main() {
    
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if (num < 1) {
        printf("Not a natural number! \n");
    } else {
        printf("Natural Number \n");
    }

    return 0;
}
