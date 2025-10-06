#include<stdio.h>
int main()
{
    int a = 5;
    a += 3;
    printf("a after a += 3: %d\n", a);
    a -= 2;
    printf("a after a -= 2: %d\n", a);
    a *= 3;
    printf("a after a *= 3: %d\n", a);
    a /= 4;
    printf("a after a /= 4: %d\n", a);
    a %= 1;
    printf("a after a %%= 1: %d\n", a);
    return 0;
}