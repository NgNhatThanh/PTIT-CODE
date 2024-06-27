#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> ans;
map<ll, int> mp;

void precal(){
    int i = 0, j = 0, k = 0;
    ans.push_back(1);
    while(ans.size() < 10000){
        ll tmp = min({ans[i] * 2, ans[j] * 3, ans[k] * 5});
        if(!mp[tmp]){
            ans.push_back(tmp);
            mp[tmp] = 1;
        }
        if(tmp == ans[i] * 2) ++i;
        else if(tmp == ans[j] * 3) ++j;
        else ++k;
    }
}

void solve(){
    int n;
    cin >> n;
    cout << ans[n - 1] << '\n';
}

int main(){
    precal();
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}