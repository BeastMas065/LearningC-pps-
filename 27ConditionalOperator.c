#include<stdio.h>
int main()
{
    int a = 10, b = 20;
    int max = (a > b) ? a : b; // Conditional operator
    printf("Greater number is %d\n", max);
    return 0;
}