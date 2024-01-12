#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll binpow(int a, int k){
    if(!k) return 1;
    ll res = binpow(a, k/2);
    (res *= res) %= 5;
    if(k&1) (res *= 2) %= 5;
    return res;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int res = 0;
        int n = s.size();
        for(int i=n-1; i>=0; --i){
            (res += (s[i] - '0')*binpow(2, n-1-i)) %= 5;
        }
        res == 0 ? cout << "Yes\n" : cout << "No\n";
    }
}