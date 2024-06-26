#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

string bienDoi(string s){
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
    return res;
}

void solve(){
    string s1, s2;
    cin >> s1 >> s2;
    s1 = bienDoi(s1);
    s2 = bienDoi(s2);
    cout << (s1 == s2 ? "YES\n" : "NO\n");
}

int main(){
    faster()
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}