#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

void solve(){
    int s, d;
    cin >> s >> d;
    if(9 * d < s) cout << "-1\n";
    else{
        stack<int> res;
        while(s > 9){
            res.push(9);
            s -= 9;
            --d;
        }
        if(s > 1 && d > 1){
            res.push(s - 1);
            s = 1;
            --d;
        }
        while(d > 1){
            --d;
            res.push(0);
        }
        cout << s;
        while(!res.empty()){
            cout << res.top();
            res.pop();
        }
        cout << '\n';
    }
}

int main(){
    faster()
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}