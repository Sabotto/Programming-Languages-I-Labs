#include <stdio.h>
#include <math.h>

void main(){

    int distance = 107;
    float fuel = 13.19;
    float consumption = distance / fuel;

    printf("Total fuel consumed: %.3f\n", consumption);
}