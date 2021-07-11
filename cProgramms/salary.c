#include <stdio.h>
struct student
{
    int Roll, Age;
} S[5];
struct student *p = S;
int main()
{

    printf("Net Salary: %.2f\nGross Salary: %d", sizeof(S));

    return 0;
}