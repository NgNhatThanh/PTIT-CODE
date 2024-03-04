#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, x;
    cin >> n;
    string s;
    queue<int> q;
    while(n--){
        cin >> s;
        if(s == "PUSH"){
            cin >> x;
            q.push(x);
        }
        else if(s == "POP"){
            if(!q.empty()) q.pop();
        }
        else{
            if(!q.empty()) cout << q.front() << '\n';
            else cout << "NONE\n";
        }
    }
}

int main(){
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}