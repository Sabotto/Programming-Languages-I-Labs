#include <stdio.h>
#include <math.h>

void main(){

    int year;

    printf("Enter year : ");
    scanf("%d", &year);

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        printf("LEAP YEAR - %d\n", year);
    }
    else{
        printf("COMMON YEAR - %d\n", year);
    }
    }
