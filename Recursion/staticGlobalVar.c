// Static and Global Variables in Recursion
#include <stdio.h>
int y = 0; // Global variable
int fun(int n)
{
    static int x = 0; // Static variable
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}

int fun2(int n)
{
    if (n > 0)
    {
        y++;
        return fun2(n - 1) + y;
    }
    return 0;
}
int main()
{
    int r, r2;
    r = fun(5);
    printf("%d\n", r);

    r = fun(5);
    printf("%d\n", r);

    r2 = fun2(5);
    printf("%d\n", r2);

    r2 = fun2(5);
    printf("%d\n", r2);

    return 0;
}
