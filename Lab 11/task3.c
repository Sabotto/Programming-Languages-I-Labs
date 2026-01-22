#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3

void initializeArray(float arr[SIZE][SIZE]);
void printArray(float arr[SIZE][SIZE]);
void sumColsIdx(float arr[SIZE][SIZE], float result[SIZE]);
void sumColsPtr(float arr[SIZE][SIZE], float result[SIZE]);

int main() {
    float A[SIZE][SIZE];
    float colSums[SIZE];

    srand(time(NULL));

    initializeArray(A);
    printf("Matrix A:\n");
    printArray(A);

    //task 3 ([] version)
    printf("\n--- [] Version ---\n");
    sumColsIdx(A, colSums);
    for(int i=0; i<SIZE; i++) {
        printf("Sum of elements of Col %d = %f\n", i, colSums[i]);
    }

    //task 3 (pointer version)
    printf("\n--- Pointer Version ---\n");
    sumColsPtr(A, colSums);
    for(int i=0; i<SIZE; i++) {
        printf("Sum of elements of Col %d = %f\n", i, colSums[i]);
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

//task 3 ([] version)
void sumColsIdx(float arr[SIZE][SIZE], float result[SIZE]) {
    for(int i = 0; i < SIZE; i++) result[i] = 0;

    for (int j = 0; j < SIZE; j++) {
        for (int i = 0; i < SIZE; i++) {
            result[j] += arr[i][j];
        }
    }
}

//task 3 (pointer version)
void sumColsPtr(float arr[SIZE][SIZE], float result[SIZE]) {
    for(int i = 0; i < SIZE; i++) *(result + i) = 0;

    for (int j = 0; j < SIZE; j++) {
        for (int i = 0; i < SIZE; i++) {
            *(result + j) += *(*(arr + i) + j);
        }
    }
}