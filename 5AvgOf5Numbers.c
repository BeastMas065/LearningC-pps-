#include<stdio.h>
int main(){
    float num1, num2, num3, num4, num5, avg;
    printf("Enter five numbers: ");
    scanf("%f %f %f %f %f", &num1, &num2, &num3, &num4, &num5);
    avg = (num1 + num2 + num3 + num4 + num5) / 5;
    printf("Average: %.2f\n", avg);
    return 0;
}