#include<stdio.h>
#define pi 3.14
int main()
{
    float radius, area;
    printf("Enter the radius of circle: ");
    scanf("%f", &radius);
    area = pi * radius * radius;
    printf("Area of circle is: %.2f\n", area);
    return 0;
}