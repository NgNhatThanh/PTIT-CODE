#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    do{
        for(int x : a) cout << x << ' ';
        cout << '\n';
    }
    while(next_permutation(a, a + n));
}