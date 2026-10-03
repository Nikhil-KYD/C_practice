
#include <stdio.h>
int main ()
{
    int a [10] = {10, 20, 30, 40, 50, 60, 70};
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


}
