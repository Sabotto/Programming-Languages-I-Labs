#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3

void initializeArray(float arr[SIZE][SIZE]);
void printArray(float arr[SIZE][SIZE]);

int main() {
    float arr1[SIZE][SIZE];
    float arr2[SIZE][SIZE];
    float result[SIZE][SIZE];

    srand(time(NULL));

    initializeArray(arr1);
    initializeArray(arr2);

    printf("Matrix 1:\n");
    printArray(arr1);

    printf("\nMatrix 2:\n");
    printArray(arr2);

    return 0;
}

void initializeArray(float arr[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            arr[i][j] = (float)rand() / RAND_MAX * 10.0; // Scaled for readability
        }
    }
}

void printArray(float arr[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%8.2f ", arr[i][j]);
        }
        printf("\n");
    }
}