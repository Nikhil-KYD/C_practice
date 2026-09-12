#include <stdio.h>

struct Calculation
{ float num1;
  float num2;
  char operator;
  float result;
};

int main ()
{
    struct Calculation calc;

    calc.num1 = 10.0;
    calc.num2 = 5.0;
    calc.operator = '+';
    calc.result = calc.num1 + calc.num2;

    printf("Calculation: %.2f %c %.2f = %.2f\n", calc.num1, calc.operator, calc.num2, calc.result);
    return 0;
}