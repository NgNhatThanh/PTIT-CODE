#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        int res = 0;
        for(int i=0; i<n; ++i){
            for(int j=n-1; j>=i; --j){
                if(j - i <= res) break;
                if(a[j] >= a[i]) res = j-i;
            }
        }
        cout << res << '\n';
    }
}
