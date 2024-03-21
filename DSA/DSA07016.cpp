#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    cin >> s;
    stack<int> st;
    st.push(1);
    int n = 2;
    for(char x : s){
        if(x == 'D') st.push(n++);
        else{
            while(!st.empty()){
                cout << st.top();
                st.pop();
            }
            st.push(n++);
        }
    }
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}   