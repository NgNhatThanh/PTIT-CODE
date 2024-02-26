#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    freopen("DATA.in", "r", stdin);
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    map<int, int> mp;
    set<int> s;
    for(int &x : a){
        cin >> x;
        if(!mp[x]) ++mp[x];
    }
    for(int &x : b){
        cin >> x;
        if(mp[x]) s.insert(x);
    }
    for(int x : s) cout << x << ' ';
}
