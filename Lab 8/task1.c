#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(float *ptr1, float *ptr2) {
    float temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    srand(time(NULL));

    float num1 = ((float)rand() / RAND_MAX) * 10.0;
    float num2 = ((float)rand() / RAND_MAX) * 10.0;

    printf("Values of floats before swapping:\n");
    printf("num1 = %.2f\n", num1);
    printf("num2 = %.2f\n", num2);

    swap(&num1, &num2);

    printf("\nValues of floats after swapping:\n");
    printf("num1 = %.2f\n", num1);
    printf("num2 = %.2f\n", num2);

    return 0;
}
