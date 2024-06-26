#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int left[n], right[n];
    stack<int> st;
    for(int i = 0; i < n; ++i){
        while(!st.empty() && a[st.top()] >= a[i]) st.pop();
        if(st.empty()) left[i] = -1;
        else left[i] = st.top();
        st.push(i);
    }
    st = stack<int>(); // clear stack
    for(int i = n - 1; i >= 0; --i){
        while(!st.empty() && a[st.top()] >= a[i]) st.pop();
        if(st.empty()) right[i] = n;
        else right[i] = st.top();
        st.push(i);
    }
    ll res = 0;
    for(int i = 0; i < n; ++i) res = max(res, 1ll * a[i] * (right[i] - left[i] - 1));
    cout << res << '\n';
}

int main(){
    faster()
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}