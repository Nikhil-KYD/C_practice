

/* write a program to perform searching, deletion, insertion and sorting operations 
   on a one dimentional array.*/

   #include <stdio.h>
    int main ()
    {
        int a [10] = {10, 20, 30, 40, 50, 60, 70};
        int n = 5;
        int x;
        int workbro = 0;

        printf("Enter between 10, 20, 30, 40, 50, 60, 70: ");
        scanf("%d", &x);

        for(int i = 0; i < 10; i++)
        {
            if (a[i] == x)
            {
                printf("Found the number you entered %d heheheh", x);
                workbro = 1;
                break;
            }
        }
              if (workbro == 0)  
            {      
                printf("Not found the number");
            }
        return 0;

    }