#include <stdio.h>

int main() {
    int A, B, smallest;
    printf("Enter First Number: ");
    scanf("%d", &A);
    printf("Enter Second Number: ");
    scanf("%d", &B);
    if (A < B)
    {
        smallest = A;
    }
    else if (B < A)
    {
        smallest = B;
    }
    else
    {
        printf("Both Are Equal");
    }
    printf("%d is the smallest", smallest);
    return 0;
}