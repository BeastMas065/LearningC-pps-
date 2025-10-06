#include<stdio.h>
int main()
{
    float pi = 3.14;
    double e = 2.718281828459045;
    long double ld = 3.141592653589;
    printf("float pi = %.2f\n", pi);
    printf("double e = %.15f\n", e);
    printf("long double ld = %.12Lf\n", ld);
}