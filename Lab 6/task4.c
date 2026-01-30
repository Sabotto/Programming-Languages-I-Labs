#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n;
    clock_t start, end;
    double time_taken;
    int i;
    
    for (n = 10000; n <= 50000; n += 10000) {
        int arr[n]; 

        for (i = 0; i < n; i++) {
            arr[i] = rand();
        }

        start = clock();
        selectionSort(arr, n);
        end = clock();

        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

        printf("%d %f s\n", n, time_taken);
    }

    return 0;
}