#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add_item(char ***list, int *elNr, char *str) {
    (*elNr)++;
    *list = (char **)realloc(*list, (*elNr) * sizeof(char *));
    
    (*list)[*elNr - 1] = (char *)malloc((strlen(str) + 1) * sizeof(char));
    strcpy((*list)[*elNr - 1], str);
}

void bubbleSort(char **arr, int n) {
    char *temp;
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    FILE *fpIn, *fpOut;
    char buffer[100];
    char **myList = NULL;
    int elNr = 0;
    int i;

    fpIn = fopen("input.txt", "r");
    if (fpIn == NULL) {
        return 1;
    }

    while (fgets(buffer, 100, fpIn) != NULL) {
        buffer[strcspn(buffer, "\n")] = 0;
        add_item(&myList, &elNr, buffer);
    }
    fclose(fpIn);

    bubbleSort(myList, elNr);

    fpOut = fopen("output.txt", "w");
    if (fpOut == NULL) {
        return 1;
    }

    for (i = 0; i < elNr; i++) {
        fprintf(fpOut, "%s\n", myList[i]);
    }
    fclose(fpOut);

    for (i = 0; i < elNr; i++) {
        free(myList[i]);
    }
    free(myList);

    return 0;
}