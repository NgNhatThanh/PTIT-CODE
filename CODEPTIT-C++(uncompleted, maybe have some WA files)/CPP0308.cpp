#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int pre[27] = {};
        for(char x : s) ++pre[x - 'A'];
        for(char x : s){
            if(pre[x - 'A'] == 1){
                cout << x;
                pre[x - 'A'] = 0;
            }
        }
        cout << '\n';
    }
}