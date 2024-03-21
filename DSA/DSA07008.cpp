#include <bits/stdc++.h>
#define ll long long
using namespace std;

int prio(char x){
    switch (x){
        case '^': return 4;
        case '+': case '-': return 2;
        case '(': return 1;
        default: return 3;
    }
}

void solve(){
    string s;
    cin >> s;
    stack<char> st;
    for(char x : s){
        if(isalpha(x)) cout << x;
        else if(x == '(') st.push(x);
        else if(x == ')'){
            while(st.top() != '('){
                cout << st.top();
                st.pop();
            }
            st.pop(); 
        }
        else{
            while(!st.empty() && prio(st.top()) >= prio(x)){
                cout << st.top();
                st.pop();
            }
            st.push(x);
        }
    }
    while(!st.empty() && st.top() != '('){
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