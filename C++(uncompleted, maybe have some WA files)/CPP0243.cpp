#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        unordered_map<int, int> mp;
        for(int &x : a){
            cin >> x;
            ++mp[x];
        }
        for(int &x : b){
            cin >> x;
            if(mp[x] > 0){
                while(mp[x]--) cout << x << ' ';
            }
        }
        vector<int> v;
        for(int x : a){
            if(mp[x] > 0) v.push_back(x);
        }
        sort(begin(v), end(v));
        for(int x : v){
            while(mp[x]-- > 0) cout << x << ' ';
        }
        cout << '\n';
    }
}