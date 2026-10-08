#include <stdio.h>
int main ()
{
    int a[10] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int x;
    int hello = 1;

    printf("Enter a number you want to add= ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            printf(" The number already exists: ");
            hello = 0;
            break;
        }
    }

    if (hello == 1)
    {
        a[n] = x;
        n++;
        printf("The number has been added in the array: ");

        for(int j = 0; j < n; j++)
        {
            printf("%d ", a[j]);
        }
    }
    return 0;
}