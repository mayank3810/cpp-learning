#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    char temp;
    cin>>s;
    int n = s.size();
    for (int i = 0; i < n/2; i++)
    {
        temp = s[i];
        s[i] = s[n-i-1];
        s[n-i-1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        if(s[i] == 'a'){
            s[i] = '0';
        }
        else if (s[i] == 'e')
        {
            s[i] = '1';
        }
        else if (s[i] == 'o')
        {
            s[i] = '2';
        }
        else if (s[i] == 'u')
        {
            s[i] = '3';
        }
    }
    cout<< s + "aca";
    
    return 0;
}