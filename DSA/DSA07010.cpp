#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    cin >> s;
    stack<string> res;
    for(int i = s.size() - 1; i >= 0 ; --i){
        if(isalpha(s[i])){
            string tmp = "";
            tmp += s[i];
            res.push(tmp);
        }
        else{
            string s1 = res.top();
            res.pop();
            string s2 = res.top();
            res.pop();
            res.push(s1 + s2 + s[i]);
        }
    }
    cout << res.top() << '\n';
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}