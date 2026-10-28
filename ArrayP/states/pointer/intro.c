#include<stdio.h>
int main ()
{
    int x = 10;
    int *p;

    p = &x;

    printf("x = %u\n",&x);
    printf("x = %u\n",&p);
    printf("p = %u",p);

    return 0;
}

// what does double ** star means