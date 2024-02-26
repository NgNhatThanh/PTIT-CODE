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
        prev_permutation(a, a+n);
        for(int x : a) cout << x << ' ';
        cout << '\n'; 
    }
}