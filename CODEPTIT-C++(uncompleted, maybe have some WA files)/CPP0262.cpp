#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        ll sum = n*(n+1)/2;
        int s1 = (sum - m)/2;
        int s2 = sum - s1;
        if(s2 - s1 != m || __gcd(s1, s2) != 1) cout << "No\n";
        else cout << "Yes\n";
    }
}