#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct Student
{
    string name;
    float marks[3];
};


int main() {
    int n;
    float avg;
    cin>>n;
    string namesearch;
    Student st[11];
    for (int i = 0; i < n; i++)
    {
       cin>>st[i].name >> st[i].marks[0] >> st[i].marks[1] >> st[i].marks[2];
    }
    cin>>namesearch;

    for (int j = 0; j < 3; j++)
    {
        if(namesearch == st[j].name){
            avg = (st[j].marks[0] + st[j].marks[1] + st[j].marks[2])/3;
        }
        else{
            cout<<"Error";
        }
    }
    printf("%.2f", avg);


    
    return 0;
}