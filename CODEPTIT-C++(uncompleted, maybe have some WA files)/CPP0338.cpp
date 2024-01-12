#include <bits/stdc++.h>
using namespace std;

int dem(int *pre){
    int cnt = 0;
    for(int i=0; i<26; ++i){
        cnt += (pre[i] > 0);
    }
    return cnt;
}

int main() 
{
    int t;
    cin >> t;
    while(t--){
        string s;
        int k;
        cin >> s >> k;
        int res = 0;
        for(int i=0; i<s.size(); ++i){
            int pre[26] = {};
            for(int j=i; j<s.size(); ++j){
                ++pre[s[j] - 'a'];
                if(dem(pre) == k) ++res;
                else if(dem(pre) > k) break;
            }
        }
        cout << res << '\n';
    }
}   