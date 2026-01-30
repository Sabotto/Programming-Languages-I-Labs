#include <stdio.h>
#include <math.h>

#define PI (4.0 * atan(1))


void cartToPolar(float x, float y, float *r, float *theta) {
    *r = sqrt(x * x + y * y);
    *theta = atan2(y, x) * (180.0 / PI); //rad to deg
}

void polarToCart(float *x, float *y, float r, float theta) {
    float radians = theta * (PI / 180.0); //deg to rad
    *x = r * cos(radians);
    *y = r * sin(radians);
}

int main() {
    float x, y;
    float r, t;
    float x1, y1;

    //task4a & 4b
    printf("Enter cartesian coordinate x: ");
    scanf("%f", &x);
    printf("Enter cartesian coordinate y: ");
    scanf("%f", &y);

    //task4c & 4d
    cartToPolar(x, y, &r, &t);

    //task4e
    printf("Polar coordinate:\n");
    printf("rho = %.2f\n", r);
    printf("theta = %.2f degree\n", t);

    //task4f & 4g
    polarToCart(&x1, &y1, r, t);

    //task4h
    printf("Cartesian coordinate:\n");
    printf("x = %.2f\n", x1);
    printf("y = %.2f\n", y1);

    return 0;
}