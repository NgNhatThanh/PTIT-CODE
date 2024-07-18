#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> res;

void in(){
    cout << '(';
    for(int i = 0; i < res.size() - 1; ++i) cout << res[i] << ' ';
    cout << res.back() << ") ";
} 

void Try(int prev, int n, int sum = 0){
    if(sum == n){
        in();
        return;
    }
    for(int i = prev; i >= 1; --i){
        if(sum + i <= n){
            res.push_back(i);
            Try(i, n, sum + i);
            res.pop_back();
        }
    }
}

void solve(){
    int n;
    cin >> n;
    Try(n, n);
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