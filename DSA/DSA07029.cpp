#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

void solve(){
    string s;
    cin >> s;
    stack<char> st;
    for(char x : s){
        if(x == ']'){
            string tmp = "";
            while(st.top() != '['){
                tmp = st.top() + tmp;
                st.pop();
            }
            st.pop();
            int sl = 1;
            string sl_str = "";
            while(!st.empty() && isdigit(st.top())){
                sl_str = st.top() + sl_str;
                st.pop();
            }
            if(sl_str.size()) sl = stoi(sl_str);
            while(sl--){
                for(char c : tmp) st.push(c);
            }
        }
        else st.push(x);
    }
    string res = "";
    while(!st.empty()){
        res = st.top() + res;
        st.pop();
    }
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