#include <stdio.h>
int main()
{
    int birthYear;
    int currentYear = 2026;
    int age;

    printf("Enter your birth year: ");
    scanf("%d", &birthYear);

    age = currentYear - birthYear;

    printf("Your age is %d years\n", age);

    return 0;
}