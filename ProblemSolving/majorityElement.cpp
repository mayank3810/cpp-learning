#include<iostream>
using namespace std;

struct checker{
    int value[20];
    int frq[20];
};

int main(){
    checker test;
    int A[20],n,count = 0 ;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }

    for (int j = 0; j< n; j++)
    {
        test.value[j] = A[j];
        for (int k = 1; k < n; k++)
        {
            if(A[k] == test.value[j]){
                count++;
            }
        }
        test.frq[j] = count;  
        count = 0;     
    }
    int max = test.frq[0];
    int indexno;
    for (int m = 0; m < n; m++)
    {
        if(max < test.frq[m] ){
            max = test.frq[m];
            indexno = m;
        }
    }
    if(max > n/2){
        cout<<test.value[indexno]<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}