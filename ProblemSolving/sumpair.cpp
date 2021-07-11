#include<iostream>

using namespace std;

int main() {
    int A[20],n,sum,check = 1;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    cin>>sum;
    for (int j = 0; j< n; j++)
    {
        cout<<"Set Value "<<A[j]<<endl;
        for (int k = 1; k < n; k++)
        {
            cout<<"Value checked with "<<A[k]<<endl;
            if(A[j] + A[k] == sum){
                
                cout<<A[j]<<", "<<A[k]<<endl;
                check = 0;
            }
        }
        cout<<endl;
        
    }
    
    if(check) {cout<<"No pair found";}
    
    return 0;
}