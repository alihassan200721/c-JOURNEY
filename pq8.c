//write a program to check if student passed or failed
//marks > 30 PASS
//marks <= 30 FAIL

#include <stdio.h>

int main() {
    
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks > 30 && marks >= 0) {
        printf("PASS \n");
    }

    else if (marks <= 30 && marks >= 0) {
        printf("FAIL \n");
    }

    else {
        printf("Invalid \n");
    }

    return 0;
}
