#include <stdio.h>
#include <math.h>

int main(){

    int a=1;
    int b=100;
    int i, j;
    char primeBool;
    int primeCount = 0;

    printf("Primes in (%d, %d) range:\n", a, b);

    for(i=a; i<=b; i++){
        primeBool = 1;

        if(i==0 || i==1 || (i>2 && i%2 == 0)){
            continue;
        }
        for(j=3; j<=(int)sqrt(i); j=j+2){
            if(i%j==0){
                primeBool = 0;
                break;
            }

        }

        if(primeBool==1){
            printf("%d ", i);
            primeCount++;
        }
    }
    printf("\n\nNumber of primes in (%d, %d): %d\n", a,b,primeCount);

    return 0;
}