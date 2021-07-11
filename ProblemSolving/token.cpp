#include<iostream>
#include <string.h>

using namespace std;
int main() {
    string s = "How is that";

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == ' '){
            printf("\n");
        }
        else{
            printf("%c", s[i]);
        }
    }
    int i = 0;
    while (i < strlen(s))
    {
        if(s[i] == ' '){
            printf("\n");
        }
        else{
            printf("%c", s[i]);
        }
        i++;
    }
    


    



    return 0;
}