#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

/*
mi[i] lưu số thứ tự của giá trị nhỏ nhất trong đoạn [i, n]
ma[i] lưu số thứ tự của giá trị lớn nhất trong đoạn [1, i]

=> Chỉ số i thỏa mã nếu stt của số lớn nhất trong [1, i] 
phải <= stt của số nhỏ nhất trong [i + 1, n]
*/

void solve(){
    int n;
    cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; ++i) cin >> a[i];
    set<int> se(a + 1, a + n + 1);
    unordered_map<int, int> mp;
    int stt = 1;
    for(int x : se) mp[x] = stt++;
    vector<int> ans;
    int mi[n + 1], ma[n + 2];
    ma[0] = 0; mi[n + 1] = INT_MAX;
    for(int i = 1; i < n; ++i) ma[i] = max(ma[i - 1], mp[a[i]]);
    for(int i = n; i > 1; --i) mi[i] = min(mi[i + 1], mp[a[i]]);
    for(int i = 1; i < n; ++i){
        if(ma[i] <= mi[i + 1]){
            ans.push_back(i);
        }
    }
    cout << ans.size() << '\n';
    for(int x : ans) cout << x << ' ';
    cout << '\n';
}

int main(){
    faster()
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}