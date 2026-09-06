#include <stdio.h>
int main()
{
    int n, num, sum = 0;

    scanf("%d", &n); //took the first n input from me ex i  took 4

    for (int i = 0; i < n; i++) //runs loop 4 time cz i took 4 as input first
    {
        scanf("%d", &num); // after i gave 4 it asks me again for 4 more input bec i took 4 first
        sum += num;
    }
    printf("The sum of n times is %d", sum);
}