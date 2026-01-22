#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3

void initializeArray(float arr[SIZE][SIZE]);
void printArray(float arr[SIZE][SIZE]);
void sumRowsIdx(float arr[SIZE][SIZE], float result[SIZE]);
void sumRowsPtr(float arr[SIZE][SIZE], float result[SIZE]);

int main() {
    float A[SIZE][SIZE];
    float rowSums[SIZE];

    srand(time(NULL));

    initializeArray(A);
    printf("Matrix A:\n");
    printArray(A);

    //task 2 ([] version)
    printf("\n--- [] Version ---\n");
    sumRowsIdx(A, rowSums);
    for(int i=0; i<SIZE; i++) {
        printf("Sum of elements of Row %d = %f\n", i, rowSums[i]);
    }

    //task 2 (pointer version)
    printf("\n--- Pointer Version ---\n");
    sumRowsPtr(A, rowSums);
    for(int i=0; i<SIZE; i++) {
        printf("Sum of elements of Row %d = %f\n", i, rowSums[i]);
    }

    return 0;
}

void initializeArray(float arr[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            arr[i][j] = (float)rand() / RAND_MAX;
        }
    }
}

void printArray(float arr[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%f ", arr[i][j]);
        }
        printf("\n");
    }
}

//task 2 ([] version)
void sumRowsIdx(float arr[SIZE][SIZE], float result[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        float sum = 0;
        for (int j = 0; j < SIZE; j++) {
            sum += arr[i][j];
        }
        result[i] = sum;
    }
}

//task 2 (pointer version)
void sumRowsPtr(float arr[SIZE][SIZE], float result[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        float sum = 0;
        for (int j = 0; j < SIZE; j++) {
            sum += *(*(arr + i) + j);
        }
        *(result + i) = sum;
    }
}