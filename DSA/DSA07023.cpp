#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    getline(cin, s);
    stack<string> res;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        res.push(tmp);
    }
    while(!res.empty()){
        cout << res.top();
        res.pop();
        if(!res.empty()) cout << ' ';
    }
    cout << '\n';
}

int main(){
    int t = 1;
    cin >> t;
    cin.ignore();
    while(t--){
        solve();
    }
}