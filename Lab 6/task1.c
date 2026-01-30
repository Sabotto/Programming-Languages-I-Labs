#include <stdio.h>

//task 1a
#define SIZE 10

int main() {
    int arr[SIZE];
    int i;
    int sum = 0;

    //task 1b
    printf("Enter %d elements: ", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    //task 1c
    for (i = 0; i < SIZE; i++) {
        sum += arr[i];
    }

    //task 1d
    printf("Array in reverse order:\n");
    for (i = SIZE - 1; i >= 0; i--) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    //task 1e
    printf("Sum of all elements of array = %d\n", sum);

    return 0;
}