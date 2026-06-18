//write a function to calulate the numeber of odd numbers in an arrary;


#include <stdio.h>

int odd(int *arr, int n);

int main() {
    int arr[14] = {1,2,3,3,4,4,5,7,8,9,9,1,2,3};

    printf("There are %d odd numbers \n", odd(arr, 14));
    return 0;
}


int odd(int *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if(arr[i] %2 != 0) {
            count ++;
        }
    }
    return count;
}
