#include <stdio.h>
#include <string.h>

float add(float a, float b)
{
    return a + b;
}
float subtract(float a, float b)
{
    return a - b;
}
float multiply(float a, float b)
{
    return a * b;
}
float divide(float a, float b)
{
    if (b == 0)
    {
        printf("Dont use 0 to divide bec if you do you are stupid");
        return 0;
    }
        return a / b;
}
// this is for the history of calculaton
struct calculation
{
    float num1;
    float num2;
    char operator;
    float result;
};

int main() 
{
    float num1, num2;
    char operator;
    char choice;
    char words[50];
    int numbers[5];


// This is for loop **I took L for loop to print the numbers in the array**
 /*  for (int L = 0; L < 5; L++)
    {
        printf("%d\n", numbers[L]);
    }

    struct calculation history[10];
    history[0].num1 = num1;
    history[0].num2 = num2;
    history[0].operator = operator;
    history[0].result = add(num1, num2);
    
    printf("%.2f %c %.2f = %.2f\n",
             history[0].num1,
             history[0].num2,
             history[0].operator,
             history[0].result);
    */



   do
    {
    printf("Enter a Number: ");
    scanf("%f", &num1);

    printf("Enter second Number: ");
    scanf("%f", &num2);

    printf("Enter operator  (+)  (-)  (*)  (/):  ");
    scanf(" %c", &operator);


//    printf("%.2f, add(num1, num2));")   we can do this shorter directly
//    printf("%.2f, subtract(num1, num2));")   we can do this shorter directly       
//    printf("%.2f, multiply(num1, num2));")   we can do this shorter directly
//    printf("%.2f, divide(num1, num2));")   we can do this shorter directly


     switch (operator)
     {
        case '+':
            printf("Addition result: %.2f\n", add(num1, num2));
            break;

            case '-':
            printf("Subtraction result: %.2f\n", subtract(num1, num2));
            break;

        
            case '*':
            printf("Multiplication result: %.2f\n", multiply(num1, num2));
            break;

            case '/':
            /* if (num2 == 0)
            {
                printf("Division by zero is not allowed\n");
            }
            else
            {*/
                printf("Division result: %.2f\n", divide(num1, num2));
            break;

            default:
            printf("Invalid enter the right operator \n");

        }


            printf("Do you want to calculate again? (Y/N): ");
            scanf(" %c", &choice);
// these are just some random if else statements i added for fun :)
            if (choice == 'y' || choice == 'Y')
            { 
                printf("Sure!!\n");
            }S
            else if (choice == 'n' || choice == 'N')
            {
                printf("Bye! Cya Next Time :)");
            }
            else 
            {
               printf("twin choose Y/y or N/n\n");
                printf("Next time use Y or N only, OK? (Type OK)\n");
                scanf(" %s", &words);
            
                if (strcmp(words, "ok") == 0 || strcmp(words, "OK") == 0)
                {
                    printf("Thank you for your understanding\n");
                }
                else
                {
                    printf("Please follow the instructions next time\n");    
                }
            }

  
         } while (choice == 'y' || choice == 'Y');

         return 0;
    
    } 
