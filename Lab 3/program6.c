#include <math.h>
#include <stdio.h>

void main(){
    double num1, num2, result;
    char opr;

    printf("Enter [number 1] [+ - * /] [number 2]: ");
    scanf("%lf %c %lf", &num1, &opr, &num2);

    switch(opr){
        case '+':
        if(opr=='+'){
            result = num1 + num2;
        }
        break;

        case '-':
        if(opr=='-'){
            result = num1 - num2;
        }
        break;

        case '*':
        if(opr=='*'){
            result = num1 * num2;
        }
        break;

        case '/':
        if(opr=='/'){
            result = num1 / num2;
        }
        break;
    }
    printf("Result of [%lf %c %lf] is: %lf\n", num1, opr, num2, result);
}