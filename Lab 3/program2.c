#include <math.h>
#include <stdio.h>

void main(){

    int x;
    int y;
    int z;
    int max;

    printf("Enter three values: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("1st number = %d\n", x);
    printf("2nd number = %d\n", y);
    printf("3rd number = %d\n", z);

    if(x > y && x > z){
        max = x;
        printf("The number %d is the biggest of the three.\n", max);
    }

    if(y > x && y > z){
        max = y;
        printf("The number %d is the biggest of the three.\n", max);
    }

    if(z > x && z > y){
        max = z;
        printf("The number %d is the biggest of the three.\n", max);
    }
    }
