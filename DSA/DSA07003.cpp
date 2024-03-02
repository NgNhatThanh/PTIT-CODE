#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    getline(cin, s);
    stack<char> st;
    for(char x : s){
        if(x == ')'){
            if(st.top() == '('){
                cout << "Yes\n";
                return;
            }
            while(st.top() != '(') st.pop();
            st.pop();
        }
        else if(!isalpha(x) && x != ' ') st.push(x);
    }
    cout << "No\n";
}

int main(){
    int t = 1;
    cin >> t;
    cin.ignore();
    while(t--){
        solve();
    }
}