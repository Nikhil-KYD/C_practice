
#include <stdio.h>
  int main ()
{
  /*  int a [10] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int x;
     
    printf("Enter the number you want to add: ");
    scanf("%d", &x);

    a[n] = x;
    n++;
    printf("damn number added.\n");
    printf("The new array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
*/

int a[10] = {10, 20, 30, 40, 50, 60, 70};
int n = 7;
int hellnah = 0;
int x;

printf("Enter the number you want to add: ");
scanf("%d", &x);

for(int i = 0; i < n; i++)
{
    if(a[i] == x)
    {
        printf("The number exists already :) ");
        hellnah = 1;
        break;  
    }
    
    else if (i == n - 1 && hellnah == 0)
    {
        a[n] = x;
        n++;
        printf("The number has been added to the array.\n");
        printf("The new array is: ");
        for(int j = 0; j < n; j++)
        {
            printf("%d ", a[j]);
        }
        break;

    }
}
return 0;
}
