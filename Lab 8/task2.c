#include <stdio.h>

void reverseArray(int* array, int arraySize){

    int* start = array;
    int* end = array + arraySize - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
    int main(){

        int array[] = {1, 2, 3, 4, 5};
        int arraySize = sizeof(array) / sizeof(array[0]);

        printf("Original array: ");
        for (int i = 0; i < arraySize; i++) {
            printf("%d ", array[i]);
        }

        reverseArray(array, arraySize);

        printf("\nReversed array: ");
        for (int i = 0; i < arraySize; i++) {
            printf("%d ", array[i]);
        }

        return 0;
    }

