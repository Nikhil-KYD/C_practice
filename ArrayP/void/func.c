#include <stdio.h>
void display ()
{
    printf("We are learning Functions in C\n");
}
int add(int a, int b)
{
    return a + b;
}

int main ()
{
    display();
    printf("This function will come after the main function\n");

    int result = add(10, 20);
    printf("The sum of 10 and 20 is: %d\n", result);
    return 0;
}


/*
