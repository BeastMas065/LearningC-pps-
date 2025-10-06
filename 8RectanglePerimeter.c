#include<stdio.h>
int main(){
    float length, width, perimeter;
    printf("Enter Length of rectangle: "); 
    scanf("%f", &length);
    printf("Enter Width of rectangle: ");
    scanf("%f", &width);
    perimeter = 2 * (length + width);
    printf("Perimeter of Rectangle: %.2f\n", perimeter);
    return 0;
}