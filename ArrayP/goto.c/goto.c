#include <stdio.h>

int main()
{
    int i;

    printf("Enter a number: ");
    scanf("%d", &i);

    if (i % 2 == 0)
        goto even;
    else
        goto odd;

even:
    printf("It's an even number: %d\n", i);
    goto end;

odd:
    printf("It's an odd number: %d\n", i);

end:
    return 0;
}