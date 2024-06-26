#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

void solve(){
    string s;
    cin >> s;
    stack<char> st;
    int cnt = 0;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == '[') st.push(s[i]);
        else{
            if(st.empty()){
                int j = i + 1;
                while(s[j] == ']') ++j;
                cnt += j - i;
                swap(s[i], s[j]);
                ++i;
            }
            else st.pop();
        }
    }
    cout << cnt << '\n';
}

int main(){
    faster()
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}