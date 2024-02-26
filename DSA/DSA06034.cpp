    #include <bits/stdc++.h>
    #define ll long long
    using namespace std;

    void solve(){
        int n, k;
        cin >> n >> k;
        int a[n];
        unordered_map<int, int> mp;
        for(int &x : a){
            cin >> x;
            ++mp[x];
        }
        ll res = 0;
        for(int x : a) res += mp[k - x] - (x == k - x);
        cout << res / 2 << '\n';
    }

    int main(){
        int t = 1;
        cin >> t;
        while(t--){
            solve();
        }
    }