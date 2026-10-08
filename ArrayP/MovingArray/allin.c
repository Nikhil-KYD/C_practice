#include <stdio.h>

void adding()
{
    int a[10] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int hellnah = 0;
    int x;

    printf("Enter the number you want to add: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            printf("The number exists already :) ");
            hellnah = 1;
            break;
        }
    }

    if (hellnah == 0)
    {
        a[n] = x;
        n++;
        printf("The number has been added to the array.\n");
        printf("The new array is: ");
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[j]);
        }
        printf("\n");
    }
}

void deletion()
{
    int a[20] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int Y;
    int found = 0;

    printf("Enter the number you want to delete: ");
    scanf("%d", &Y);

    for (int i = 0; i < n; i++)
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
            printf("\n");
            break;
        }
    }

    if (found == 0)
    {
        printf("Wrong number can i get your moms number instead? ");
    }
}

void searching()
{
    int a[10] = {10, 20, 30, 40, 50, 60, 70};
    int n = 5;
    int x;
    int workbro = 0;

    printf("Enter between 10, 20, 30, 40, 50, 60, 70: ");
    scanf("%d", &x);

    for (int i = 0; i < 10; i++)
    {
        if (a[i] == x)
        {
            printf("Found the number you entered %d heheheh\n", x);
            workbro = 1;
            break;
        }
    }

    if (workbro == 0)
    {
        printf("Not found the number twin get better");
    }

    if (workbro == 1)
    {
        for (int k = 0; k < 5; k++)
        {
            printf("YOU ARE RIGHT!!!\n");
        }
    }
}

int main()
{
    int damn;

    printf("Choose from the three options: 1. deletion 2. insertion 3 . searching\n");
    scanf("%d", &damn);

    switch (damn)
    {
        case 1:
            printf("deletion.\n");
            deletion();
            break;
        case 2:
            printf("insertion.\n");
            adding();
            break;
        case 3:
            printf("searching.\n");
            searching();
            break;
        default:
            printf("Invalid choice. Please choose 1, 2, or 3.\n");
    }

    return 0;
}