#include <math.h>
#include <stdio.h>

void main(){
    int x;
    int y;

    printf("Enter two values: ");
    scanf("%d %d", &x, &y);

    printf("1st number = %d\n", x);
    printf("2nd number = %d\n", y);

    if(x > y){
        printf("%d is maximum\n", x);
    }
    else{
            printf("%d is maximum\n", y);
        }
}
