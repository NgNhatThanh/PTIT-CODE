#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    set<int> Union;
    map<int, int> Inter;
    for(int &x : a){
        cin >> x;
        Union.insert(x);
        Inter[x] = 1;
    }
    for(int &x : b){
        cin >> x;
        Union.insert(x);
        ++Inter[x];
    }
    for(int x : Union) cout << x << ' ';
    cout << '\n';
    for(auto x : Inter){
        if(x.second > 1) cout << x.first << ' ';
    }
    cout << '\n';
}   

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}