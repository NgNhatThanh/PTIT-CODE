#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    stack<string> st;
    string emp = "";
    for(char x : s){
        if(isalpha(x)) st.push(emp + x);
        else{
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();
            st.push(t2 + x + t1); 
        }
    }
    cout << st.top() << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}