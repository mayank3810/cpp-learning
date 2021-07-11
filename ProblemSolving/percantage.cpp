#include<iostream>
using namespace std;

int main(){
    int n,max = 0;
    char s[1000];
    char most;
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    for (int i = 0; i < n; i++)
    {   int count = 0;
        
        char c = s[i];
         for (int j = 0; j < n; j++)
         {
             if(c == j){
                 count = count + 1;
             }
         }
         if(count > max){
             max = count;
            most = c;

         }
         
    }
    cout<<most<<" ";
    cout<<max;
    
    return 0;
}