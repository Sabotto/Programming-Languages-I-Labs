#include <math.h>
#include <stdio.h>

int main(){

    int x1=25;
    int x2=35;
    int y1=15;
    int y2=10;

    int d = sqrt((pow(x2,2)-pow(x1,2))+(pow(y2,2)-pow(y1,2)));

    printf("Calculated distance: %d\n", d);

    return 0;
}