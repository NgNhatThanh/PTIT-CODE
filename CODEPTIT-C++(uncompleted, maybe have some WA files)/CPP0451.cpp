#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k, x;
        cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        cin >> k >> x;
        int l = lower_bound(a, a+n, x) - a - 1;
        int r = l + (l < 0);
        while(r < n && a[r] <= x) ++r;
        vector<int> res;
        while(k--){
            if(r < n){
                if(l >= 0 && x - a[l] <= a[r] - x) res.push_back(a[l--]);
                else res.push_back(a[r++]);
            }
            else res.push_back(a[l--]);
        }
        sort(begin(res), end(res));
        for(int x : res) cout << x << ' ';
        cout << '\n';
    }
}