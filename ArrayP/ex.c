#include <stdio.h>

int main()
{
    char names[5][50];
    int rollNumbers[5];
    int marks[5][3];

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Name: ");
        scanf(" %49[^\n]", names[i]);

        printf("Roll number: ");
        scanf("%d", &rollNumbers[i]);

        printf("Marks in Subject 1: ");
        scanf("%d", &marks[i][0]);
        printf("Marks in Subject 2: ");
        scanf("%d", &marks[i][1]);
        printf("Marks in Subject 3: ");
        scanf("%d", &marks[i][2]);
    }

    printf("\nStudent Results\n");
    printf("Name\tRoll No\tTotal\tPercentage\tAverage\n");

    for (int i = 0; i < 5; i++)
    {
        int total = marks[i][0] + marks[i][1] + marks[i][2];
        float percentage = (total / 300.0) * 100;
        float average = total / 3.0;

        printf("%s\t%d\t%d\t%.2f%%\t\t%.2f\n",
               names[i], rollNumbers[i], total, percentage, average);
    }

    return 0;
}