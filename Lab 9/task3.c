#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(float *ptr1, float *ptr2) {
    float temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    //task 3a
    srand(time(NULL));
    float x = (float)rand() / RAND_MAX;
    float y = (float)rand() / RAND_MAX;

    //task 3b
    printf("Before: x = %f, y = %f\n", x, y);

    //task 3c
    swap(&x, &y);

    //task 3d
    printf("After:  x = %f, y = %f\n", x, y);

    return 0;
}