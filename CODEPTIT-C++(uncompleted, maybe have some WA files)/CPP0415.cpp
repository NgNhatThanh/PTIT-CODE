#include <bits/stdc++.h>
using namespace std;

string na = "aeiouyAEIOUY";

int main() 
{
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n], b[m], mi = INT_MAX, ma = INT_MIN;
        for(int &x : a){
            cin >> x;
            ma = max(ma, x);
        }
        for(int &x : b){
            cin >> x;
            mi = min(mi, x);
        }
        cout << 1ll*mi*ma << '\n';
    }
}   