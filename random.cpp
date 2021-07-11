#include<iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;

int main(){
    int i;
    srand(time(NULL));
    cout<<rand()%10 +1;
    return 0;
    }