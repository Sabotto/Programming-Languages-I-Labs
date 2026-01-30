#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//task 1a
#define N 10

//task 1b
void reverseArray(int *inputArray, int leftIndex, int rightIndex) {
    int temp;

    if (leftIndex >= rightIndex) {
        return;
    }

    temp = inputArray[leftIndex];
    inputArray[leftIndex] = inputArray[rightIndex];
    inputArray[rightIndex] = temp;

    reverseArray(inputArray, leftIndex + 1, rightIndex - 1);
}

int main() {
    int arr[N];
    int i;

    //task 1a cont
    srand(time(NULL));
    for (i = 0; i < N; i++) {
        arr[i] = rand() % 100;
    }

    //task 1c
    printf("Original Array:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr, 0, N - 1);

    printf("Reversed Array:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}