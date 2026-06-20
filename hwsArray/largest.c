//print out the largest number in a array;

#include <stdio.h>


int main() {
    int arr[5] = {12,53,2,43,75};
    int *ptr;
    int largest;

    ptr = arr;
    largest = *ptr;
    for(int i = 0; i < 5; i++) {
        if(*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
    }
    printf("Largest number = %d\n", largest);

    return 0;
}
