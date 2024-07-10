#include <bits/stdc++.h>
#define ll long long
using namespace std;

set<string> res;
int ma;

int check(string s){
    if(s.size() < 2) return 0;
    stack<int> st;
    for(char x : s){
        if(x == '(') st.push(x);
        else if(x == ')'){
            if(st.empty()) return 0;
            else st.pop();
        }
    }
    return st.empty();
}

void Try(string s, int i){
    if(s.size() < ma) return;
    if(check(s)){
        if(s.size() > ma){
            res.clear();
            ma = s.size();
            res.insert(s);
        }
        else if(s.size() == ma) res.insert(s);
        return;
    }
    for(int j = i; j < s.size(); ++j){
        if(s[j] == '(' || s[j] == ')'){
            string tmp = s;
            tmp.erase(begin(tmp) + j, begin(tmp) + j + 1);
            Try(tmp, j);
        }
    }
}

void solve(){
    string s;
    cin >> s;
    ma = 0;
    Try(s, 0);
    if(res.empty()) cout << "-1\n";
    else{
        for(string x : res) cout << x << ' ';
        res.clear();
        cout << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}