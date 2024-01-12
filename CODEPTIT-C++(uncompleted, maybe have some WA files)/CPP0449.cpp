#include <bits/stdc++.h>
#define ll long long
using namespace std;

int solve(){
    int n, x;
    cin >> n >> x;
    int a[n];
    map<int, int> mp;
    for(int &k : a){
        cin >> k;
        ++mp[k];
    }
    for(int k : a){
        if(mp[k - x]) return 1;
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        cout << solve() << '\n';
    }
}