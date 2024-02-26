#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        pair<int, int> a[n+1];
        for(int i=1; i<=n; ++i){
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a+1, a+n+1);
        int l = n, r = 0;
        for(int i=1; i<=n; ++i){
            if(a[i].second != i){
                l = min(l, a[i].second);
                r = max(r, a[i].second);
            }
        }
        cout << l << ' ' << r << '\n';
    }
}   