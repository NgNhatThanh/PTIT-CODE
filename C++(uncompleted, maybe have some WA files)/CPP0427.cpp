#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        int cnt = 0;
        for(int i=0; i<n; ++i){
            if(!a[i]) ++cnt;
            else{
                if(i<n-1 && a[i] == a[i+1]){
                    a[i] *= 2;
                    a[i+1] = 0;
                } 
                cout << a[i] << ' ';
            }
        }
        while(cnt--) cout << 0 << ' ';
        cout << '\n';
    }
}   