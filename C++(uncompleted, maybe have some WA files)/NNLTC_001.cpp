#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    vector<int> v;
    int x;
    map<int, int> mp;
    while(cin >> x){
        if(!mp[x]){
            v.push_back(x);
        }
        ++mp[x];
    }
    for(int x : v) cout << x << ' ' << mp[x] << '\n';
}
