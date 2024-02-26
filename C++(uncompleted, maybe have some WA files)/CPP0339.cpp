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
        int res = 0;
        int pre[26] = {};
        for(char x : s) ++pre[x - 'a'];
        for(int i=0; i<26; ++i){
            res += pre[i] + pre[i]*(pre[i]-1)/2;
        }
        cout << res << '\n';
    }
}