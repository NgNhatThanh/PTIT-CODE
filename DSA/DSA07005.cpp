#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

void solve(){
    string s;
    cin >> s;
    stack<char> st;
    stack<int> dao;
    for(char x : s){
        if(x == ')'){
            string tmp = "";
            while(st.top() != '('){
                tmp = st.top() + tmp;
                st.pop();
            }
            st.pop();
            for(char &c : tmp){
                if(c == '-' && dao.top()) c = '+';
                else if(c == '+' && dao.top()) c = '-';
                st.push(c);
            }
            dao.pop();
        }
        else{
            if(x == '(') dao.push(!st.empty() && (st.top() == '-'));
            st.push(x);
        }
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