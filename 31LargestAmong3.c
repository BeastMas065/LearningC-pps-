#include <stdio.h>

int main() {
    int A, B, C, greatest;
    printf("Enter First Number: ");
    scanf("%d", &A);
    printf("Enter Second Number: ");
    scanf("%d", &B);
    printf("Enter Third Number: ");
    scanf("%d", &C);
    if ((A > B) && (A > C))
    {
        greatest = A;
    }
    else if ((B > A) && (B > C))
    {
        greatest = B;
    }
    else if ((C > A) && (C > B))
    {
        greatest = C;
    }
    else
    {
        printf("Both Are Equal");
    }
    printf("%d is the greatest", greatest);
    return 0;
}