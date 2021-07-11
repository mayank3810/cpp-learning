#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    float d, x1, x2, half;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    d = (b * b) - (4 * a * c);
    if (d > 0)
    {
        x1 = (-b + sqrt(abs(d))) / (2 * a);
        x2 = (-b - sqrt(abs(d))) / (2 * a);
        printf("Roots are real and unequal : %.2f %.2f ", x1, x2);
    }
    else if (d < 0)
    {
        d = abs(d);
        half = -b / (2 * a);
        x2 = sqrt(d) / (2 * a);
        printf("Roots are imaginary : %.2f+%.2fi %.2f-%.2fi  ", half, x2, half, x2);
    }
    else
    {
        x1 = (-b) / (2 * a);
        printf("Roots are real and equal  : %.2f ", x1);
    }

    return 0;
}