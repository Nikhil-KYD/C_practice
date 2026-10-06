// Write a c program to solve calculator problem using void display with parameter.
// write a C program to do fibonacci, prime number, factorial.

#include <stdio.h>
void factorial()
{
    int n, i;
    long long result = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        result = result * i;
    }
    printf("Factorial of %d is: %lld\n", n, result);
}

void fibonacci()
{
    int n, a = 0, b = 1, fadd;
    printf("Enter the Number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a);
        fadd = a + b;
        a = b;
        b = fadd;
    }
    printf("\n");
}

int main ()
{
    int choice;

    printf("Choose an option:\n1. Factorial\n2. Fibonacci\n");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            factorial();
            break;
        case 2:
            fibonacci();
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}