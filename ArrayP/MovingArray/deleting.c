#include <stdio.h>
void hehe()
{
    printf("This is deletion of Array from given Arrays,");
    printf("just enter the number you want to delete and boom thats it: ");
}
int main ()
{
    int a [20] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int Y;
    int found = 0;

    // this is deletion of an element from the array
    printf("Enter the number you want to delete: ");
    scanf("%d", &Y);

    for(int i = 0; i < n; i++)
    {
            if (a[i] == Y)
            {
                found = 1;
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
            if (found == 0)
            {
                printf("Wrong number can i get your moms number instead?\n\n");
                hehe();
            }
             return 0;                                                                    
}



