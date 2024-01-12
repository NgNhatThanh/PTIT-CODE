#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        int l = 0, r = n-1;
        int res = 0;
        while(l < r){
            if(a[l] < a[r]){
                a[l+1] += a[l];
                ++l; ++res;
            }
            else if(a[l] > a[r]){
                a[r-1] += a[r];
                --r; ++res;
            }
            else{
                ++l; --r;
            }
        }
        cout << res << '\n';
    }
}   