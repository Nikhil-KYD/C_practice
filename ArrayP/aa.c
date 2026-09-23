#include <stdio.h>

int main ()
{
    int numb[1];

    printf("Enter a number: ");
    scanf("%d", &numb[0]);

    int result = numb[0] * numb[0];
    printf("Square of %d is %d\n", numb[0], result);

    return 0;
}