#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        sort(a, a+n);
        int l = 0, r = n-1;
        while(l<=r){
            if(l == r) cout << a[l];
            else cout << a[r] << ' ' << a[l] << ' ';
            ++l; --r;
        }
        cout << '\n';
    }
}   