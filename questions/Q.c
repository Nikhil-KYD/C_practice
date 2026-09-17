#include <stdio.h>
int main()
{
    int n, digit, count[10] = {0};

    printf("Please enter a number: ");
    scanf("%d", &n);

    do
    {
        digit = n % 10;
        count[digit]++;
        n /= 10;
    }
    while (n != 0);

    for (int i = 0; i < 10; i++)
    {
        if (count[i] > 0)
        {
            printf("%d appears %d time\n", i, count[i]);
        }
    }

    return 0;
}