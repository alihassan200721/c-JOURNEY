#include <stab.h>
#include <stdio.h>

void temp(int n);


int main() {



    return 0;
}


void temp(int n) {
    if(n >= 35) {
        printf("Hot! \n");
    } else if (n >= 25 & n < 35) {
        printf("Warm \n");
    } else {
        printf("Cold \n");
    }
}
