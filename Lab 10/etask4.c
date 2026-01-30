#include <stdio.h>

void printCompositions(int n, int *arr, int len) {
    int i;
    if (n == 0) {
        for (i = 0; i < len; i++) {
            printf("%d", arr[i]);
            if (i < len - 1) printf("+");
        }
        printf("\n");
    } else {
        for (i = 1; i <= n; i++) {
            arr[len] = i;
            printCompositions(n - i, arr, len + 1);
        }
    }
}

int main() {
    int n = 3;
    int arr[100]; 
    
    printf("Compositions of %d:\n", n);
    printCompositions(n, arr, 0);

    return 0;
}

//recursive backtracking used to go from 1 to n, adds the number to a temp array, then calls itself with n-i (the difference) until n = 0, then prints the array as a final result