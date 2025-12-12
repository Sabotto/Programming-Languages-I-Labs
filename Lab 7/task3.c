#include <stdio.h>

int main(){

    int value1 = 50;
    int value2;
    
    int *intPtr;
    intPtr = &value1;
    printf("Value pointed to by intPtr: %d\n", *intPtr);
    value2 = *intPtr;
    printf("Value of value2: %d\n", value2);
    printf("Address of value1: %p\n", &value1);
    printf("Address stored in intPtr: %p\n", intPtr);
    
    return 0;
}