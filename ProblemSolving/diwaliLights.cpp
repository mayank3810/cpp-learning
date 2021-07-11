#include <bits/stdc++.h>

using namespace std;

// long lights(int n) {
//     int combination = 1;
//     for(int i = 1; i <= n; i++){
//         combination = combination * i;
//     }
        
//     cout<<combination;

// }

int main()
// {
//     ofstream fout(getenv("OUTPUT_PATH"));

//     int t;
//     cin >> t;
//     cin.ignore(numeric_limits<streamsize>::max(), '\n');

//     for (int t_itr = 0; t_itr < t; t_itr++) {
//         int n;
//         cin >> n;
//         cin.ignore(numeric_limits<streamsize>::max(), '\n');

//         long result = lights(n);

//         fout << result << "\n";
//     }

//     fout.close();

//     return 0;
int n;
    cin>>n;
        int combination = 1;
    for(int i = 1; i <= n; i++){
        combination = combination * i;
    }
    cout<<combination;

    return 0;
// }