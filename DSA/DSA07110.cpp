#include <bits/stdc++.h>
#define ll long long
using namespace std;

int op(char x){
    switch(x){
        case ')': return '(';
        case ']': return '[';
        case '}': return '{';
    }
}

void solve(){
    string s;
    cin >> s;
    stack<char> st;
    for(char x : s){
        if(x == '(' || x == '[' || x == '{') st.push(x);
        else{
            if(!st.empty() && st.top() == op(x)) st.pop();
            else{
                cout << "NO\n";
                return;
            }
        }
    }
    if(st.empty()) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}