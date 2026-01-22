#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3

void initializeArray(float arr[SIZE][SIZE]);
void printArray(float arr[SIZE][SIZE]);
void addMatrices(float A[SIZE][SIZE], float B[SIZE][SIZE], float C[SIZE][SIZE]);
void multiplyMatrices(float A[SIZE][SIZE], float B[SIZE][SIZE], float C[SIZE][SIZE]);
float calculateTrace(float arr[SIZE][SIZE]);
float calculateDeterminant(float arr[SIZE][SIZE]);

int main() {
    float A[SIZE][SIZE], B[SIZE][SIZE];
    float sumResult[SIZE][SIZE], multResult[SIZE][SIZE];

    srand(time(NULL));

    initializeArray(A);
    initializeArray(B);

    printf("Matrix A:\n");
    printArray(A);
    printf("\nMatrix B:\n");
    printArray(B);

    addMatrices(A, B, sumResult);
    multiplyMatrices(A, B, multResult);

    printf("\n--- Traces ---\n");
    printf("Trace of A: %f\n", calculateTrace(A));
    printf("Trace of B: %f\n", calculateTrace(B));
    printf("Trace of A + B: %f\n", calculateTrace(sumResult));

    printf("\n--- Determinants ---\n");
    printf("Determinant of A: %f\n", calculateDeterminant(A));
    printf("Determinant of B: %f\n", calculateDeterminant(B));
    printf("Determinant of A * B: %f\n", calculateDeterminant(multResult));

    return 0;
}

void initializeArray(float arr[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            arr[i][j] = (float)rand() / RAND_MAX * 10.0;
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

float calculateTrace(float arr[SIZE][SIZE]) {
    float trace = 0;
    for (int i = 0; i < SIZE; i++) {
        trace += arr[i][i];
    }
    return trace;
}

float calculateDeterminant(float arr[SIZE][SIZE]) {
    float det = 0;
    
    //breaking matrix down into 2x2 minors for the first row (i=0)
    //formula: a11(M11) - a12(M12) + a13(M13)
    
    //minor 0,0 (rows 1,2 cols 1,2)
    float m00 = arr[1][1] * arr[2][2] - arr[1][2] * arr[2][1];
    
    //minor 0,1 (rows 1,2 cols 0,2)
    float m01 = arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0];
    
    //minor 0,2 (rows 1,2 cols 0,1)
    float m02 = arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0];

    det = arr[0][0] * m00 - arr[0][1] * m01 + arr[0][2] * m02;
    
    return det;
}