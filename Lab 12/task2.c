#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3

void initializeArray(float arr[SIZE][SIZE]);
void printArray(float arr[SIZE][SIZE]);
void addMatrices(float A[SIZE][SIZE], float B[SIZE][SIZE], float C[SIZE][SIZE]);
void multiplyMatrices(float A[SIZE][SIZE], float B[SIZE][SIZE], float C[SIZE][SIZE]);

int main() {
    float arr1[SIZE][SIZE];
    float arr2[SIZE][SIZE];
    float result[SIZE][SIZE];

    srand(time(NULL));

    initializeArray(arr1);
    initializeArray(arr2);

    printf("Matrix A:\n");
    printArray(arr1);
    printf("\nMatrix B:\n");
    printArray(arr2);

    // Addition
    addMatrices(arr1, arr2, result);
    printf("\nSum (A + B):\n");
    printArray(result);

    // Multiplication
    multiplyMatrices(arr1, arr2, result);
    printf("\nProduct (A * B):\n");
    printArray(result);

    return 0;
}

void initializeArray(float arr[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            arr[i][j] = (float)rand() / RAND_MAX * 5.0;
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

void addMatrices(float A[SIZE][SIZE], float B[SIZE][SIZE], float C[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void multiplyMatrices(float A[SIZE][SIZE], float B[SIZE][SIZE], float C[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            C[i][j] = 0;
            for (int k = 0; k < SIZE; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}