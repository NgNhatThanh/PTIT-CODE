#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    int ok;
    vector<vector<int>> steps;
    for(int i = 0; i < n - 1; ++i){
        ok = 0;
        for(int j = 0; j < n - 1; ++j){
            if(a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
                ok = 1;
            }
        }
        if(ok) steps.push_back(a);
        else break;
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