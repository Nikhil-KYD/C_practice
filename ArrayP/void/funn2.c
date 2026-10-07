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
}

void prime()
{
    int n, i, prime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        prime = 0;
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                prime = 0;
                break;
            }
        }
    }

    if (prime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
     printf("\n");
}
   

int main ()
{
    int damn;
    printf("choose from 1 2 or 3\n");
    scanf("%d", &damn);

    switch (damn)
    {
        case 1:
            factorial();
            break;
        case 2:
            fibonacci();
            break;
        case 3:
            prime();
            break;

        default:
            printf("Invalid choice\n");
    }
    return 0;
}