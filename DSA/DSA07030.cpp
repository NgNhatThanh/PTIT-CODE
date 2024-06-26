#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int biggest_rect(int b[], int m){
    int left[m], right[m];
    stack<int> st;
    for(int i = 0; i < m; ++i){
        while(!st.empty() && b[st.top()] >= b[i]) st.pop();
        if(st.empty()) left[i] = -1;
        else left[i] = st.top();
        st.push(i);
    }
    st = stack<int>();
    for(int i = m - 1; i >= 0; --i){
        while(!st.empty() && b[st.top()] >= b[i]) st.pop();
        if(st.empty()) right[i] = m;
        else right[i] = st.top();
        st.push(i);
    }
    int res = 0;
    for(int i = 0; i < m; ++i){
        res = max(res, b[i] * (right[i] - left[i] - 1));
    }
    return res;
}

void solve(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int res = 0;
    int b[m] = {};
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
            if(a[i][j]) ++b[j];
            else b[j] = 0;
        }
        res = max(res, biggest_rect(b, m));
    }
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