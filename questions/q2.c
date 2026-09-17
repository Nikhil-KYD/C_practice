#include <stdio.h>
int main(void)
{
    int totalSeconds;
    int hours;
    int minutes;

    printf("enter seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;

    printf("%d hours and %d minutes\n", hours, minutes);
    return 0;
}