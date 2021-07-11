#include <iostream>
#include <typeinfo>
using namespace std;

int solution(int A[], int size)
{
    int max, min;
    int largestEven = INT_MIN;
    int smallest_odd = INT_MAX;
    for (int i = 0; i < size; ++i)
    {
        if (A[i] % 2 == 0)
        {

            max = A[0];
            for (i = 0; i < size; i++)
            {
                if (max < A[i])
                    max = A[i];
            }

            largestEven = max;
        }
        else
        {
            min = A[0];
            for (i = 0; i < size; i++)
            {
                if (min > A[i])
                    min = A[i];
            }
            smallest_odd = min;
        }
    }
    return smallest_odd + largestEven;
}
int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    cout << solution(A, 5);
    return 0;
}