#include<iostream>
using namespace std;

int main() {
    int N;
    
    cin>>N;
    int A[10];
    for(int i = 0; i < N; i++ ){
        cin>>A[i];
    }
    for (int j = N-1; j >= 0; j--){
       cout<<A[j]<<" ";
    }
return 0;
}