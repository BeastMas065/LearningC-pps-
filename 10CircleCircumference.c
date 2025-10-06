#include<stdio.h>
#define pi 3.14
int main()
{
    float radius, circumference;
    printf("Enter the radius of circle: ");
    scanf("%f", &radius);
    circumference = 2 * pi * radius;
    printf("Circumference of circle is: %.2f\n", circumference);
    return 0;
}