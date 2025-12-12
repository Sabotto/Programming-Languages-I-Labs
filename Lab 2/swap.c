#include <math.h>
#include <stdio.h>

int main(){

    int x = 5;
    int y = 7;

    printf("Value of x before swap: %d\n", x);
    printf("Value of y before swap: %d\n", y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("New value of x: %d\n", x);
    printf("New value of y: %d\n", y);

    return 0;
}