#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    vector<vector<int>> steps;
    for(int i = 0; i < n - 1; ++i){
        for(int j = i + 1; j < n; ++j){
            if(a[j] < a[i]) swap(a[i], a[j]);
        }
        steps.push_back(a);
    }
    for(int i = steps.size() - 1; i >= 0; --i){
        cout << "Buoc " << i + 1 << ": ";
        for(int x : steps[i]) cout << x << ' ';
        cout << '\n';
    }
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}