#include<iostream>

using namespace std;

int main(){
    int A[20] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;

    int N = sizeof(A)/sizeof(A[0]);

    for(int i=0;i<10;i++){
        if (A[i])
        {
            sum = sum + A[i];
        }

    }
    cout<<N;
    cout<<sum;
}