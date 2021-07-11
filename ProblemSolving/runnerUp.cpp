#include<iostream>
#include <bits/stdc++.h> // sort function library
using namespace std;
int main(){
    int n,score[15],max,runnerUp;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>score[i];
    }

    sort(score, score+n); 

    sort(arr, arr + n, greater<int>()); //sort in desending

    for (int j = n - 2; j >= 0; j--) {
        if (score[j] != score[n - 1]) {
            cout<<score[j];
            break;
        }
    }
    return 0;
}