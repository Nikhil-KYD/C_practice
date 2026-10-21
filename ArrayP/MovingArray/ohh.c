// write a c program to implement a library if user defined functions for performing mathematical operations and demonstrate 
// call by value and call by refrence 
#include <stdio.h>
#include <math.h>

void adding()
{
    int x = 10;
    int y = 20;
    int ans = x + y;
    printf("Your answer is: %d\n", ans);
}

void subtraction ()
{
    int x = 20;
    int y = 10;
    int answer = x - y;
    printf("Your answer is: %d\n", answer);
}

void multiple()
{
    float x = 12;
    float y = 10;
    float ans = ceil(x * y);
    printf("Your answer is: %f\n", ans);
}

void div ()
{
    float x = 30;
    float y = 10;
    float ans = ceil(x/y);
    printf("Your answer is: %f\n", ans);
}

void flooring()
{
    float x = 12.7;
    printf("floor(%.1f) = %.1f\n", x, floor(x));
}

void ceiling()
{
    float x = 12.3;
    printf("ceil(%.1f) = %.1f\n", x, ceil(x));
}

int main()
{
    adding();
    subtraction();
    multiple();
    div();
    flooring();
    ceiling();
    return 0;
}