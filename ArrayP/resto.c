#include <stdio.h>
int main ()
{
    int total = 0;
    int quantity, choice;
    char orderAgain;


    printf("-__-__-__-__-__-__-__MENU ITEMS AVAILABLE!!__-__-__-__-__-__-__-\n");

    do {

    printf("Chilli Paneer: $12\n");
    printf("Samosa: $10\n");
    printf("Chicken $100\n");
    printf("Roasted chicken $40\n");


    printf("Choose an item\n");
    scanf("%d",&choice);

    printf("Enter How much\n");
    scanf("%d",&quantity);


    switch (quantity)
    {
    case 1:
    total += 12 * quantity;
    printf("Chilli paneer added. Total: $%d\n", total);
    break;

    case 2:
    total += 10 * quantity;
    printf("Samosa added. Total: $%d\n", total);
    break;

    case 3:
    total += 100 * quantity;
    printf("Chicken added. Total: $%d\n", total);
    break;

    case 4:
    total += 40 * quantity;
    printf("Roasted chicken added. Total: $%d\n", total);
    break;

    default:
    printf("Invalid choice.\n");
    }

    printf("Do you want to order again? (Y/N)\n");
    scanf(" %c", &orderAgain);
    } while (orderAgain == 'Y' || orderAgain == 'y');

    printf("Final total: $%d\n", total);

    return 0;
}

    

