#include <stdio.h>

int main() {
    // Initialize variables
    int sum;
    int number;
    int ans;
    scanf("%d", &sum);
    scanf("%d", &number);

    // Your code here
    do {
        sum = sum + number;
        number = number + 2;
        printf("Sum is: %d\n", sum);
        printf("Num is: %d\n", number);
        printf("------------------\n");

    } while (number <= 50);
    

    // Print the final sum
    printf("Final Sum: %d\n", sum);
    return 0;
}
