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
    stack<string> st;
    for(char x : s){
        if(isalpha(x)){
            string tmp = "";
            tmp += x;
            st.push(tmp);
        }
        else{
            string t1 = st.top(); st.pop();
            string t2 = st.top(); st.pop();
            st.push('(' + t2 + x + t1 + ')');
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