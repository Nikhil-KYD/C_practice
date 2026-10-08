#include <stdio.h>
int main ()
{
    int a = 10, b = 20, c = 2;
    int largest;
    if (a>b) {
        largest = a;
    }
    if (b>c) {
        largest = b;
    }
    if (c>a) {
        largest = c;
    }
    printf("The largest number out of the 3 is: %d", largest);
    return 0;
}