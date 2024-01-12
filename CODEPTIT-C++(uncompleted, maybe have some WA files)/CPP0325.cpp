#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int le = 0, chan = 0;
        for(int i=0; i<s.size(); ++i){
            if(i&1) le += s[i] - '0';
            else chan += s[i] - '0';
        }
        cout << (abs(chan-le) % 11 == 0) << '\n';
    }
}