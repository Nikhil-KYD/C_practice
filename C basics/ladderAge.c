#include <stdio.h>
int main ()
{
    int Age;

    printf("Enter your age: ");
    scanf("%d", &Age);

    if (Age <= 12)
    {
        printf("Child");
    }
     else if (Age <= 19)
     {
        printf("its a teenager");
     }
     else if (Age <= 59)
     {
        printf("Thats an Adult");
     }
     else if (Age >= 60)
     {
        printf("Thats a Senior");
     }
    return 0;
     }