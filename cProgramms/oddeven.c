#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("%d is Even", number);
    }
    else
    {
        printf("\n%d is Odd", number);
    }

    return 0;
}