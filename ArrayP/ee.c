#include <stdio.h>
int main ()
    {
        char dish [3][50];
        char name [3][50];
        int coupon [3]; 
        int code [3][3];


    for(int i = 0; i < 3; i++)
    {
        printf(">>>>>>>>>DADDY ANIKET'S RESTAURAN<<<<<<<<<<<<\n");
        printf("Enter food for person %d\n", i + 1);

        printf("Enter your dish: ");
        scanf(" %49[^\n]", dish[i]);
        printf("Enter your name: \n");
        scanf(" %49[^\n]", name[i]);
        printf("Enter coupon: \n");
        scanf("%d", &coupon[i]);
        printf("Enter 1st code digit: \n");
        scanf("%d", &code[i][0]);
        printf("Enter 2st code: \n");
        scanf("%d", &code[i][1]);
        printf("Enter 3rd code: \n");
        scanf("%d", &code[i][2]);

    } 

    for (int i = 0; i < 3; i++)
    {
        float total = code[i][0] + code[i][1] + code[i][2];
        float average = total / 3.0;

        printf("%s\t\t%s\t\t%.2f\t\t%.2f\n",
        dish[i], name[i], total, average);
    }
    return 0;

}


