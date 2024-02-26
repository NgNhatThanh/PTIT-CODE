#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    int res = max({a[0] * a[1], a[0] * a[1] * a[n - 1], a[n - 1] * a[n - 2],
    a[n - 1] * a[n - 2] * a[n - 3]});
    cout << res;
}