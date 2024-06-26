#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    stack<int> st;
    st.push(-1);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        int ans = 1;
        while(st.size() > 1 && a[st.top()] <= a[i]) st.pop();
        ans += i - st.top() - 1;
        st.push(i);
        cout << ans << ' ';
    }
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