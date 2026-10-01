#include <stdio.h>
int main ()
{
    int a [20] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int Y;

    // this is deletion of an element from the array
    printf("Enter the number you want to delete: ");
    scanf("%d", &Y);

    for(int i = 0; i < 20; i++)
    {
            if (a[i] == Y)
            {
                for (int j = i; j < n - 1; j++)
                    {
                         a[j] = a[j + 1];
                    }

                        n--;

                     printf("removed the array: ");

                    for (int j = 0; j < n; j++)
                    {
                        printf("%d ", a[j]);
                    }

                        break;
            }
    }     
}



