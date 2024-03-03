#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n], res[n];
    for(int &x : a) cin >> x;
    stack<int> st;
    for(int i = n - 1; i >= 0; --i){
        while(!st.empty() && st.top() <= a[i]) st.pop();
        if(st.empty()) res[i] = -1;
        else res[i] = st.top();
        st.push(a[i]);
    }
    for(int x : res) cout << x << ' ';
    cout << '\n';
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}