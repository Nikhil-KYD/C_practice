#include <stdio.h>

int main ()
{
    int N[1];

    printf("Enter a number: ");
    scanf("%d", &N[0]);

    int result = N[0] * N[0];
    printf("Square of %d is %d\n", N[0], result);

    return 0;
}