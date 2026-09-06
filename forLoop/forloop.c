#include <stdio.h>
int main()
{
    
    int prime;
    int i, j;

    scanf("%d", &prime);
   
    for (i = 2; i <= 10; i++) {
        if (prime % 2 == 0) {

            for (j = 1; j <= i; j++) {
                prime++;
            }
        }
    }

    return 0;
}
   