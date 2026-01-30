#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compareChars(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

int main() {
    int n, i;
    char *arr;

    srand(time(NULL));

    printf("Enter the length of the string: ");
    scanf("%d", &n);

    arr = (char *)malloc((n + 1) * sizeof(char));
    if (arr == NULL) {
        return 1;
    }

    for (i = 0; i < n; i++) {
        arr[i] = 'a' + (rand() % 26);
    }
    arr[n] = '\0';

    printf("Original string:\n%s\n", arr);

    qsort(arr, n, sizeof(char), compareChars);

    printf("Sorted string:\n%s\n", arr);

    free(arr);

    return 0;
}