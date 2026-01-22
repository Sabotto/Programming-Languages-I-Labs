#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    int n_copy;
    int rev = 0;
    int last;

    printf("Input an integer: ");
    scanf("%d", &n);

    n_copy = n;

    while(n != 0){
        last = n % 10;
        rev = rev * 10 + last;

        n = n/10;
    }

    if(n_copy == rev){
        printf("%d is a palindrome\n", n_copy);
    } else{
        printf("%d is not a palindrome\n", n_copy);
    }

    return 0;
}