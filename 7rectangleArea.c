#include<stdio.h>
int main() {
    float length, width, area;
    printf("Enter Length of rectangle: ");
    scanf("%f", &length);
    printf("Enter Width of rectangle: ");
    scanf("%f", &width);
    area = length * width;
    printf("Area of Rectangle: %.2f\n", area);
    return 0;
}