#include<iostream>
#include<string>
using namespace std;

int main() {
    string s,sub;  
    int k,n,ic = 0;

    cin>>s;
    cin>>k;

    n = s.length();

    int loopcount = n/k;

    for (int i = 0; i < loopcount; i++)
    {
        for(int j = ic; j < ic + k; j++){
            for(int m = 0;m < k ;m++){
                if(s[j] != s[j+1])
                sub[m++] = s[j];
            }
        }
        cout<<sub;

        ic = ic + k;

        cout<<endl;
    }
    
    return 0;
}