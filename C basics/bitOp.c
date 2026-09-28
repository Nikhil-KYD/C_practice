#include <stdio.h>
int main() 
{
    int a = 122;
    int b = 119;
    int formula;

    formula = a & b;
    printf(" AND (a & b): %d\n", formula);

    formula = a | b;
    printf(" OR (a | b): %d\n", formula);

    formula = a ^ b;
    printf(" XOR (a ^ b): %d\n", formula);

    formula = ~a;
    printf(" NOT (~a): %d\n", formula);

    formula = a << 2;
    printf(" Left Shift (a << 2): %d\n", formula);

    formula = b >> 2;
    printf(" Right Shift (b >> 2): %d\n", formula);

    return 0;
}
