#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int, int> mp;
        int a[n][n];
        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                cin >> a[i][j];
                if(mp[a[i][j]] == i){
                    ++mp[a[i][j]];
                }
            }
        }
        int res = 0;
        for(auto x : mp) res += (x.second == n);
        cout << res << '\n';
    }
}