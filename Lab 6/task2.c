#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//task 2a
#define SIZE 10

int main() {
    int arr[SIZE];
    int i;
    int minVal, maxVal;
    int minIndex, maxIndex;

    srand(time(NULL));

    //task 2b
    for (i = 0; i < SIZE; i++) {
        arr[i] = (rand() % 81) + 10; 
    }

    printf("Elements in array:\n");
    for (i = 0; i < SIZE; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    //task 2c
    minVal = arr[0];
    maxVal = arr[0];
    minIndex = 0;
    maxIndex = 0;

    //task 2d
    for (i = 1; i < SIZE; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIndex = i;
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIndex = i;
        }
    }

    //task 2e
    printf("Maximum element = arr[%d] = %d\n", maxIndex, maxVal);
    printf("Minimum element = arr[%d] = %d\n", minIndex, minVal);

    return 0;
}