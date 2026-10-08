// These was just for practice and has nothing to do with other codes
//only was created for the practical test.

#include <stdio.h>

void insertion()
{
    int a[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int x;
    int fond = 1;

    printf("Enter a number u want to insert: ");
    scanf("%d", &x);

    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            printf("The number is already present in the array\n");
            fond = 0;
            break;
        }
    }

    if(fond == 1)
    {
        a[n] = x;
        n++;

        printf("The number is inserted successfully\n");
        printf("The new array is: ");

        for(int i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
}


void deletion()
{
    int a[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int x;
    int fond = 0;

    printf("Enter the number you want to delete: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            fond = 1;

            for(int j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }

            n--;

            printf("ARRAY REMOVED\n");
            printf("The new array is: ");

            for(int j = 0; j < n; j++)
            {
                printf("%d ", a[j]);
            }

            break;
        }
    }

    if (fond == 0)
    {
        printf("Wrong number, number not found.\n");
    }
}


int main()
{
    int Zoya;

    printf("\nEnter between these two\n1: Insertion\n2: Deletion\n");
    scanf("%d", &Zoya);

    switch (Zoya)
    {
        case 1:
            printf("You chose Insertion\n");
            insertion();
            break;

        case 2:
            printf("You chose deletion\n");
            deletion();
            break;

        default:
            printf("Invalid\n");
            break;
    }

    return 0;
}