#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compareDoubles(const void *a, const void *b) {
    double arg1 = *(const double *)a;
    double arg2 = *(const double *)b;
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}

int main() {
    int n, i;
    double *arr;

    srand(time(NULL));

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (double *)malloc(n * sizeof(double));
    if (arr == NULL) {
        return 1;
    }

    for (i = 0; i < n; i++) {
        arr[i] = ((double)rand() / RAND_MAX) * 100.0;
    }

    printf("Original array:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    qsort(arr, n, sizeof(double), compareDoubles);

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}