#include <stdio.h>

int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    if ((N % 3 == 0) && (N % 5 == 0))
    {
        printf("%d is divisible by both 3 and 5", N);
    }
    else if (N % 3 == 0)
    {
        printf("%d is divisible by 3 only", N);
    }
    else if (N % 5 == 0)
    {
        printf("%d is divisible by 5 only", N);
    }
    else
    {
        printf("%d is not divisible by 3 or 5", N);
    }
    return 0;
}