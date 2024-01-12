#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, x;

int cmp(int a, int b){
    return abs(a - x) < abs(b - x);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> x;
        int a[n];
        for(int &x : a) cin >> x;
        stable_sort(a, a+n, cmp);
        for(int x : a) cout << x << ' ';
        cout << '\n';
    }
}   