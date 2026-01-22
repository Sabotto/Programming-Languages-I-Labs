#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3

void initializeArray(float arr[SIZE][SIZE]);
void printArray(float arr[SIZE][SIZE]);
void addArrays(float arr1[SIZE][SIZE], float arr2[SIZE][SIZE], float result[SIZE][SIZE]);
void multiplyArrays(float arr1[SIZE][SIZE], float arr2[SIZE][SIZE], float result[SIZE][SIZE]);

int main() {
    float A[SIZE][SIZE];
    float B[SIZE][SIZE];
    float C[SIZE][SIZE];

    srand(time(NULL));

    //task 1a
    initializeArray(A);
    initializeArray(B);

    //task 1b
    printf("Matrix A:\n");
    printArray(A);
    printf("\nMatrix B:\n");
    printArray(B);

    //task 1c
    addArrays(A, B, C);
    printf("\nSum of matrices A + B:\n");
    printArray(C);

    //task 1d
    multiplyArrays(A, B, C);
    printf("\nProduct of matrices A * B:\n");
    printArray(C);

    return 0;
}

//task 1a
void initializeArray(float arr[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            arr[i][j] = (float)rand() / RAND_MAX;
        }
    }
}

//task 1b
void printArray(float arr[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%f ", arr[i][j]);
        }
        printf("\n");
    }
}

//task 1c
void addArrays(float arr1[SIZE][SIZE], float arr2[SIZE][SIZE], float result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

//task 1d
void multiplyArrays(float arr1[SIZE][SIZE], float arr2[SIZE][SIZE], float result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0;
            for (int k = 0; k < SIZE; k++) {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}