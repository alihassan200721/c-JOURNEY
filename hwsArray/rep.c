//In a array find how many times a numbers x exists;


#include <stdio.h>


int countOccurance(int arr[], int size, int x);


int main() {
    int arr[] = {3,5,3,2,12,3,3,3,31,31,2,5,7,4};
    int size = sizeof(arr) /sizeof(arr[0]);
    int x;

    //taking x as a input from the user;
    printf("Enter x: ");
    scanf("%d", &x);

    int result = countOccurance(arr, size, x);

    printf("Array: ");
    for(int i = 0; i< size; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    printf("Number %d occurs %d times \n", x, result);





    return 0;
}


int countOccurance(int arr[], int size, int x) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] == x) {
            count++;
        }
    }

    return count;
}
