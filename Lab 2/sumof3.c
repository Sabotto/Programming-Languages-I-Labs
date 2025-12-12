#include <stdio.h>
#include <math.h>

void main(){

    printf("Task 1: Sum of three-digit number");
    
    int threedig = 567;
    printf("Chosen number: %d\n", threedig);

    int x = threedig / 100;
    int y = (threedig / 10) % 10;
    int z = threedig % 10;

    printf("First: %d\n", x);
    printf("Second: %d\n", y);
    printf("Third: %d\n", z);

    int sum = x+y+z;

    printf("Sum of digts: %d\n", sum);

    return 0;
}