#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    for(int i=2; i<=sqrt(n); ++i){
        while(n%i==0){
            ++cnt;
            n/=i;
            if(cnt == k){
                cout << i << '\n';
                return;
            }
        }
    }
    if(n>1 && cnt == k-1){
        cout << n << '\n';
        return;
    }
    cout << -1 << '\n';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}