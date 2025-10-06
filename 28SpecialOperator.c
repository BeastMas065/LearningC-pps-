#include<stdio.h>
int main()
{
    int a = 5;
    int *ptr = &a;
    printf("Value of a : %d \n", a);
    printf("Address of a : %d \n", &a);
    printf("Value of a using pointer : %d \n", *ptr);
    return 0;
}