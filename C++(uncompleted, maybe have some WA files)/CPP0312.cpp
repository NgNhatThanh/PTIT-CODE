#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int k;
        cin >> k;
        int pre[26] = {};
        for(char x : s) ++pre[x - 'a'];
        int cnt = 0;
        for(int i=0; i<26; ++i) cnt += (pre[i] > 0);
        int miss = 26 - cnt;
        if(miss > k || miss > s.size() - cnt) cout << 0;
        else cout << 1;
        cout << '\n';
    }
}   