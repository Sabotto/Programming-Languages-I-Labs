#include <stdio.h>
#include <math.h>

void main(){

    int a;
    int b;
    int c;
    int discriminant;
    int root1;
    int root2;

    printf("Enter coefficients of quadratic: ");
    scanf("%d %d %d", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    if(discriminant > 0){
        printf("The roots are real.\n");

        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);

        printf("Root 1 = %d\n", root1);
        printf("Root 2 = %d\n", root2);
    } 
    if(discriminant == 0){
        printf("The root is real.\n");
        root1 = root2 = -b / (2*a);
        printf("Root = %d\n", root1);
    }
    else if(discriminant < 0){
        printf("Roots are complex numbers, no real solution.");
    }
}