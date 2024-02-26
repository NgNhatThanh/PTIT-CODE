#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    vector<vector<int>> steps;
    for(int i = 0; i < n; ++i){
        for(int j = i - 1; j >= 0; --j){
            if(a[j] > a[j + 1]) swap(a[j], a[j + 1]);
        }
        steps.push_back(vector<int>(begin(a), begin(a) + i + 1));
    }
    for(int i = steps.size() - 1; i >= 0; --i){
        cout << "Buoc " << i << ": ";
        for(int x : steps[i]) cout << x << ' ';
        cout << '\n';
    }
}

int main(){ 
    int t = 1;
    // cin >> t;
    while(t--){
        solve();        
    }
}