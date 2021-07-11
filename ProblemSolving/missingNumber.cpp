#include<iostream>
using namespace std;

int main(){
    int A[] = {1, 2, 4, 6, 3, 7, 8};
    int n = sizeof(A)/sizeof(A[0]);
    int sumN = (n + 1) * (n + 2) / 2;
    for (int i = 0; i < n; i++)
    {
        sumN -= A[i];
    }

    cout<<"Missing No. " <<sumN;
    

    return 0;
}