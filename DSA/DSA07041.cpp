#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

void solve(){
    string s;
    cin >> s;
    stack<char> st;
    int res = 0, cur = 0;
    for(char x : s){
        if(x == ')'){
            if(st.empty()){
                res += cur;
                cur = 0;
            }
            else{
                cur += 2;
                st.pop();
            } 
        }
        else st.push(x);
    }
    res += cur;
    cout << res << '\n';
}

int main(){
    faster()
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}