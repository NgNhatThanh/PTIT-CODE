#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll a, c = 0;
        string b;
        cin >> a >> b;
        for(char x : b) c = (c*10 + x - '0') % a;       
        cout << __gcd(a, c) << '\n';
    }
}
