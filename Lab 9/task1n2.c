#include <stdio.h>

int main() {
    //task1
    printf("=task 1=\n");

    float x;
    float *pa, *pb;

    x = 12.51;
    pa = &x;


    pb = NULL;


    printf("e) &x = %p, &pa = %p, &pb = %p\n", (void*)&x, (void*)&pa, (void*)&pb);


    printf("f) x = %.2f, pa = %p, pb = %p\n", x, (void*)pa, (void*)pb);


    pb = pa;


    printf("h) x = %.2f, pa = %p, pb = %p\n", x, (void*)pa, (void*)pb);


    *pb = 3.14;


    printf("j) x = %.2f, pa = %p, pb = %p\n", x, (void*)pa, (void*)pb);


    printf("k) *pa = %.2f, *pb = %.2f\n\n", *pa, *pb);


    //task2
    printf("=task 2=\n");

    double a, b;


    double *p1 = NULL;
    double *p2 = NULL;


    printf("c) &a = %p, &b = %p, &p1 = %p, &p2 = %p\n", (void*)&a, (void*)&b, (void*)&p1, (void*)&p2);


    printf("d) p1 = %p, p2 = %p\n", (void*)p1, (void*)p2);


    p1 = &a;


    p2 = &b;


    printf("g) p1 = %p, p2 = %p\n", (void*)p1, (void*)p2);

    printf("h) Enter two real numbers: ");
    scanf("%lf %lf", p1, p2);

    printf("i) p1 = %p, p2 = %p, a = %lf, b = %lf\n", (void*)p1, (void*)p2, a, b);

    double sum = *p1 + *p2;
    double diff = *p1 - *p2;
    double prod = *p1 * *p2;
    double quot = *p1 / *p2;


    printf("k) %.2lf + %.2lf = %.2lf\n", *p1, *p2, sum);
    printf("   %.2lf - %.2lf = %.2lf\n", *p1, *p2, diff);
    printf("   %.2lf * %.2lf = %.2lf\n", *p1, *p2, prod);
    printf("   %.2lf / %.2lf = %.2lf\n", *p1, *p2, quot);

    return 0;
}