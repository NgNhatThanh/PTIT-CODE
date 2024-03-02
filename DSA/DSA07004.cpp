#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    cin >> s;
    stack<char> st;
    int res = 0;
    for(char x : s){
        if(x == '(') st.push(x);
        else{
            if(st.empty()){
                ++res;
                st.push('(');
            }
            else if(st.top() == ')'){
                ++res;
                st.pop();
            }
            else st.pop();
        }
    }
    res += st.size() / 2;
    cout << res << '\n';
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}