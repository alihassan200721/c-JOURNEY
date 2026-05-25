//check if the character is uppercase or not 

#include <stdio.h>

int main() {
    char ch;

    printf("Enter alphabet: ");
    scanf("%s", &ch);
    
    if (ch >= 'A' && ch <= 'Z') {
        printf("uppercase \n");
    } else {
        printf("Not uppercase \n");
    }

    return 0;
}
