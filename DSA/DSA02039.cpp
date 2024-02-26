#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> res;
vector<int> tmp;

int n;

void quaylui(int st, int sum = 0){
    if(sum == n){
        res.push_back(tmp);
        return;
    }
    if(sum > n) return;
    for(int i = st; i >= 1; --i){
        tmp.push_back(i);
        quaylui(i, sum + i);
        tmp.pop_back();
    }
}

void solve(){
    cin >> n;
    quaylui(n);
    cout << res.size() << '\n';
    for(auto x : res){
        cout << '(';
        for(int i = 0; i < x.size(); ++i){
            if(i < x.size() - 1) cout << x[i] << ' ';
            else cout << x[i] << ") ";  
        }
    }
    cout << '\n';
    res.clear();
    tmp.clear();
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}