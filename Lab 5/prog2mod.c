#include <math.h>
#include <stdlib.h>
#include <stdio.h>

double f(double x){
return x*x*x*x + x*x*x + x*x + x + 1;
}

int main(){

    double beg = 0.0;
    double end = 4.0;
    double rectCount = 10.0;
    double base = (end-beg)/rectCount; //to be calculated
    double fArea = 0.0;

    printf("Begin=%f, End=%f, Number of rectangles=%f, Base=%f\n\n", beg, end, rectCount, base);
    for(int i=0;i<rectCount;i++){
        double midpoint = beg + (i*base)+(base/2.0);
        double height = f1(midpoint);
        double singularRectangleArea = base * height;

        f1Area += singularRectangleArea;
    }

    for(int i=0;i<rectCount;i++){
        double midpoint = beg + (i*base)+(base/2.0);
        double height = f2(midpoint);
        double singularRectangleArea = base * height;

        f2Area += singularRectangleArea;
    }

    for(int i=0;i<rectCount;i++){
        double midpoint = beg + (i*base)+(base/2.0);
        double height = f3(midpoint);
        double singularRectangleArea = base * height;

        f3Area += singularRectangleArea;
    }

    printf("Result for f1 = %f\n", f1Area);
    printf("Result for f2 = %f\n", f2Area);
    printf("Result for f3 = %f\n", f3Area);

    return 0;

    //THIS FILE CONTAINS QUESTION 4.
}