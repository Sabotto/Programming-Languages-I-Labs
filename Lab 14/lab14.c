#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_list(char **list, int elNr) {
    int i;
    for (i = 0; i < elNr; i++) {
        printf("%s\n", list[i]);
    }
    printf("\n");
}

void add_item(char ***list, int *elNr, char *str) {
    (*elNr)++;
    *list = (char **)realloc(*list, (*elNr) * sizeof(char *));
    
    (*list)[*elNr - 1] = (char *)malloc((strlen(str) + 1) * sizeof(char));
    strcpy((*list)[*elNr - 1], str);
}

void remove_item(char ***list, int *elNr, char *str) {
    int i, j;
    int index = -1;

    for (i = 0; i < *elNr; i++) {
        if (strcmp((*list)[i], str) == 0) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        free((*list)[index]);

        for (j = index; j < *elNr - 1; j++) {
            (*list)[j] = (*list)[j + 1];
        }

        (*list)[*elNr - 1] = NULL;
        (*elNr)--;
        *list = (char **)realloc(*list, (*elNr) * sizeof(char *));
    }
}

int main() {
    //task 1
    char **list1 = NULL;
    int elNr1 = 3;
    int i;

    list1 = (char **)malloc(elNr1 * sizeof(char *));

    list1[0] = (char *)malloc((strlen("uno") + 1) * sizeof(char));
    strcpy(list1[0], "uno");

    list1[1] = (char *)malloc((strlen("dos") + 1) * sizeof(char));
    strcpy(list1[1], "dos");

    list1[2] = (char *)malloc((strlen("tres") + 1) * sizeof(char));
    strcpy(list1[2], "tres");

    printf("Task 1 Output\n");
    print_list(list1, elNr1);

    for (i = 0; i < elNr1; i++) {
        free(list1[i]);
    }
    free(list1);

    //task 2
    char **list2 = NULL;
    int elNr2 = 0;

    add_item(&list2, &elNr2, "Bleach");
    add_item(&list2, &elNr2, "One Piece");
    add_item(&list2, &elNr2, "Naruto");

    printf("Task 2 Output\n");
    print_list(list2, elNr2);

    //task 3
    remove_item(&list2, &elNr2, "One Piece");

    printf("Task 3 Output\n");
    print_list(list2, elNr2);

    for (i = 0; i < elNr2; i++) {
        free(list2[i]);
    }
    free(list2);

    return 0;
}