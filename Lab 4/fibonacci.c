#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    int first = 0;
    int second = 1;
    int next;
    int i;

    printf("Enter the number of terms to compute for the Fibonnaci sequence: ");
    if(scanf("%d", &n) != 1 || n<0){
        printf("Invalid input, please make sure your input is a non-negative integer.");
        return 1;
    }

    printf("\nFibonnaci Sequence (First %d terms):\n", n);

    if(n==0){

    } 
    else if(n==1){
        printf("%d,\n ", first);
    }
    else{
        printf("%d, %d, ", first, second);

        for(i = 3; i<=n; i++){
           next = first + second;
           
           printf("%d, ", next);
           first = second;
           second = next;
        }
        printf("\n");
    }
    return 0;

    /*b. three are needed, these are the first, second, and next variables used in
    place of the terms in the fibonnaci sequence.*/

    /*c. first and second start at 0 and 1 respectively, whilst next obtains its
    value throughout the operations.*/
}