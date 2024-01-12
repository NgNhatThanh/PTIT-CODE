#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll res = 2;
        for(int i=2; i<=sqrt(n); ++i){
            if(n%i==0){
                res = i;
                while(n%i==0) n/=i;
            }
        }
        if(n>1) res = n;
        cout << res << '\n';
    }
}