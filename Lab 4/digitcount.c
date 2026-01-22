#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    // using do-while loop
    long n;
    long n_copy;
    int digcount = 0;
    int log_count;

    printf("Enter a number: ");
    scanf("%ld", &n);

    n_copy = n;
    do{
        n_copy = n_copy / 10;
        digcount++;
    } while (n_copy != 0);

    //using logarithm
    log_count = (n==0) ? 1 : ((int)floor(log10(abs(n)))) + 1;

    //printing results
    printf("Total digits (do-while): %d\n", digcount);
    printf("Total digits (log10): %d\n", log_count);

    return 0;

    /*a. division should be used as dividing by 10 allows us to 
    remove the last digit and count how many times this is done 
    to get the digit count.*/

    /*b. a copy is made of it to ensure that the original value is kept
    unchanged, because if it is changed throughout the operation (i.e., by the
    division or logarithm counting methods), the operation will be false.*/

    /*c. 4 are needed; 'n' is a long to store the number given by the user and used
    for the operations, 'n_copy' is the preserved input of the user, 'digcount' is 
    used to store the digit count, and 'log_count' does the same but for the logarithm
    method.*/
}