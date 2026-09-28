#include<stdio.h>
int main()
{
    printf("hello we are going to learn today bitwise operator\n");
    int a = 12, b = 8;
    printf("Bitwise and Operator result=%d\n",a&b);
    printf("Bitwise or Operator result=%d\n",a|b);
    printf("Bitwise xor Operator result=%d\n",a^b);
    printf("Bitwise << left shift operator reslt=%d\n",a<<2);
    printf("Bitwise >> right shift operator result=%d\n",a>>1);
    printf("Bitwise not operator result=%d\n",~a);
    return 0;

}