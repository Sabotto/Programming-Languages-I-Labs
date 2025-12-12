#include <stdio.h>

int maxValueInArray(int* array, int arraySize){
    int max = array[0];
    for (int i = 1; i < arraySize; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int main(){
    int array[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(array) / sizeof(array[0]);
    int max = maxValueInArray(array, arraySize);
    printf("Max value in array: %d\n", max);
    return 0;
}
