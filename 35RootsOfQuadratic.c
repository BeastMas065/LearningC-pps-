// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>

int main() {
    int a, b, c, D, x1, x2, realpart, imaginarypart;
    
    printf("Enter coeff of x squared: ");
    scanf("%d", &a);
    printf("Enter coeff of x: ");
    scanf("%d", &b);
    printf("Enter constant: ");
    scanf("%d", &c);
    
    D = (b*b)-(4*a*c);
    if (D > 0)
    {
        x1 = (-b + sqrt(D))/(2*a);
        x2 = (-b - sqrt(D))/(2*a);
        printf("Roots are Real and Distinct\n");
        printf("x1 : %d \n x2 : %d \n", x1, x2);
    }
    else if (D == 0)
    {
        x1 = (-b)/(2*a);
        x2 = (-b)/(2*a);
        printf("Roots are Real and equal\n");
        printf("x1 : %d \n x2 : %d \n", x1, x2);
    }
    else
    {
        realpart = (-b)/(2*a);
        imaginarypart = (sqrt(D))/(2*a);
        printf("Roots are imaginary\n");
        printf("x1 : %d + i %d\nx2 : %d - i %d\n", realpart, imaginarypart, realpart, imaginarypart);
    }
    return 0;
}