#include <stdio.h>

void printHelloWorld(int count);

int main() {
    printHelloWorld(5);

    return 0;
}


//recursive function 
void printHelloWorld(int count) {
    if (count == 0) {
        return;
    }

    printf("Hello, world! \n");
    printHelloWorld(count -1 );
}
