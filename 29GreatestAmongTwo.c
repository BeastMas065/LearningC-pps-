
#include <stdio.h>

int main() {
    int A, B, greatest;
    printf("Enter First Number: ");
    scanf("%d", &A);
    printf("Enter Second Number: ");
    scanf("%d", &B);
    if (A > B)
    {
        greatest = A;
    }
    else if (B > A)
    {
        greatest = B;
    }
    else
    {
        printf("Both Are Equal");
    }
    printf("%d is the greatest", greatest);
    return 0;
}