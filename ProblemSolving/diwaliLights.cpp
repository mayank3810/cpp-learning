#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int combination = 1;
    for (int i = 1; i <= n; i++)
    {
        combination = combination * i;
    }
    cout << combination;

    return 0;
}