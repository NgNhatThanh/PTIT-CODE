#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i=0; i<n; ++i) cin >> a[i];
        int l = 0, r = n-1;
        int r1 = 0;
        while(l<r){
            while(l<n && a[l] <= k) ++l;
            while(r && a[r] > k) --r;
            if(l < r){
                swap(a[l], a[r]);
                ++r1;
            } 
        }
        cout << r1 << '\n';
    }
}