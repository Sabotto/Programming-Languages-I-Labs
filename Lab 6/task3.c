#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//task 3a
#define SIZE 10

int main() {
    int arr[SIZE];
    int i, j, min_idx, temp;

    srand(time(NULL));

    //task 3b
    for (i = 0; i < SIZE; i++) {
        arr[i] = rand() % 101;
    }

    //task 3c
    printf("Elements in array are:\n");
    for (i = 0; i < SIZE; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    //task 3d
    for (i = 0; i < SIZE - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < SIZE; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }

    //task 3e
    //analysis:
    //- the outer loop runs (SIZE - 1) times
    //- the initial value of the inner loop index j is (i + 1), so it increases by 1 in each iteration of the outer loop

    //task 3f
    printf("Elements in sorted array are:\n");
    for (i = 0; i < SIZE; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}