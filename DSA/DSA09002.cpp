#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    cin.ignore();
    string s, tmp;
    vector<pair<int, int>> canh;    
    for(int i = 1; i <= n; ++i){
        getline(cin, s);
        stringstream ss(s);
        while(ss >> tmp){
            if(stoi(tmp) > i) canh.push_back({i, stoi(tmp)});
        }
    }
    for(auto x : canh) cout << x.first << ' ' << x.second << '\n';  
}

int main(){
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}