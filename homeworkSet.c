//homework set

//#include <stdio.h>


//write a program to print the average of 3 numbers
//int main() {

    //int num1, num2, num3;
    //float average;

    // Input numbers
    //printf("Enter 3 numbers: ");
    //scanf("%d %d %d", &num1, &num2, &num3);

    // Calculate average
    //average = (num1 + num2 + num3) / 3.0;

    // Print result
    //printf("Average = %.2f\n", average);

    //return 0;
//}


//write a program to check if given character is digit or not.
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter: ");
    scanf("%c", &ch);

    if (isdigit((unsigned char)ch)) {
        printf("%c is a digit. \n", ch);
    } else {
        printf("%c is not a digit. \n", ch);
    }

    return 0;
}






//write a program to print the smallest number

/*
#include <stdio.h>

int main() {

    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    


    if (a < b && a < c) {
        printf("smallest = %d \n", a);
    }
    else if (b < a && b < c) {
        printf("smallest = %d \n", b);
    }
    else{
        printf("smallest = %d \n", c);
    }


    return 0;
}

*/
