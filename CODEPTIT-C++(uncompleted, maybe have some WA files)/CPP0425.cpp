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
        sort(a, a+n);
        int add = n/2 + n%2;
        for(int i=0; i<add; ++i){
            cout << a[i] << ' ';
            if(i + add < n) cout << a[i+add] << ' ';
        }
        cout << '\n'; 
    }
}       