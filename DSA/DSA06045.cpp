#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

void solve(){
    int n;
    string s;
    cin >> n >> s;
    // C(2, n)
    ll res = 1ll * n * (n - 1) / 2;
    vector<int> v;
    int cnt = 1;
    for(int i = 1; i < n; ++i){
        // Tính độ dài dãy ký tự liên tiếp giống nhau
        if(s[i] == s[i - 1]) ++cnt;
        else{
            v.push_back(cnt);
            cnt = 1;
        }
    }
    v.push_back(cnt);
    for(int i = 1; i < v.size(); ++i){
        /*
        Loại bỏ đi các cặp ký tự không tạo thành xâu tốt
        VD: AB, ABB, BA, BAA, BAAA....
        */
        res -= (v[i] + v[i - 1] - 1);
    }
    cout << res;
}

int main(){
    faster()
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}