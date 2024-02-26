#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    freopen("DATA.in", "r", stdin);
    int n;
    map<int, int> mp;
    set<int> se;
    while(cin >> n){
        se.insert(n);
        ++mp[n];
    }
    for(int x : se) cout << x << ' ' << mp[x] << '\n';
}
