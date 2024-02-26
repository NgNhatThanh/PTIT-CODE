#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        map<char, int> mp;
        int xh = 0;
        for(char x : s) ++mp[x];
        for(auto x : mp) xh = max(xh, x.second);
        cout << (xh <= s.size()/2 + s.size()%2) << '\n';
    }
}   