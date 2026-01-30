#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//task 3a
#define N 20

//task 3b
int binarySearch(int *arr, int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}

int main() {
    int arr[N];
    int i;
    int target;
    int result;

    //task 3a cont
    srand(time(NULL));
    arr[0] = 0;
    for (i = 1; i < N; i++) {
        arr[i] = arr[i - 1] + (rand() % 10);
    }

    printf("Sorted Array:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    //task 3c
    target = arr[rand() % N]; 
    printf("\nSearching for element: %d\n", target);

    result = binarySearch(arr, 0, N - 1, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}