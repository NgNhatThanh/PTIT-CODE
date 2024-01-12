#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string n;
        ll k;
        cin >> n >> k;
        ll res = 0;
        for(char x : n){
            res = (res*10 + x - '0') % k;
        }
        cout << res << '\n';
    }
}   