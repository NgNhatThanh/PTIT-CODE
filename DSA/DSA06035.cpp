    #include <bits/stdc++.h>
    #define ll long long
    using namespace std;

    void solve(){
        int n;
        cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        int inc[n], dec[n];
        inc[0] = dec[n - 1] = 1;
        for(int i = 1; i < n; ++i){
            inc[i] = 1;
            if(a[i] > a[i - 1]) inc[i] += inc[i - 1];
        }
        for(int i = n - 2; i >= 0; --i){
            dec[i] = 1;
            if(a[i] > a[i + 1]) dec[i] += dec[i + 1];
        }
        int res = 0;
        for(int i = 0; i < n; ++i) res = max(res, inc[i] + dec[i] - 1);
        cout << res << '\n';
    }

    int main(){
        int t = 1;
        cin >> t;
        while(t--){
            solve();
        }
    }