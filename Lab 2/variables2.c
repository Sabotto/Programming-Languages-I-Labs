#include <math.h>
#include <stdio.h>

int main(){

    float x1=25.0;
    float x2=35.0;
    float y1=15.0;
    float y2=10.0;

    float d = sqrt((pow(x2,2)-pow(x1,2))+(pow(y2,2)-pow(y1,2)));

    printf("Calculated distance: %f\n", d);

    return 0;
}