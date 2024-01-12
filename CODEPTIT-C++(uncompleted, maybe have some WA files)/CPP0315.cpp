#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    cin >> s;
    for(int i=s.size()-1; i>0; --i){
        if(s[i] < s[i-1]){
            int k = i;
            while(k < s.size() && s[k] < s[i-1]) ++k;
            --k;
            while(s[k] == s[k-1]) --k;
            swap(s[i-1], s[k]);
            cout << s << '\n';
            return;
        }
    }
    cout << -1 << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}   