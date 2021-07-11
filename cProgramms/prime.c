#include <stdio.h>

int main()
{
    int number, count = 0;
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count += 1;
        }
    }
    if (count == 2)
    {
        printf("%d Is Prime", number);
    }
    else
    {
        printf("%d Is Not Prime", number);
    }

    return 0;
}