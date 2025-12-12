#include <stdio.h>
#include <math.h>

int main(){

    float height = 12.4;
    float base = 18.61;

    float area;
    float hypotenuse;

    area = (height * base) / 2;
    hypotenuse = sqrt(pow(height,2) + pow(base,2));

    printf("Area result: %.3f\n", area);
    printf("Hypotenuse result: %.3f\n", hypotenuse);

    return 0;
}