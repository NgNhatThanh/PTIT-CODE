#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n], smaller[n], greater[n];
    stack<int> gr, sm;
    for(int &x : a) cin >> x;
    for(int i = n - 1; i >= 0; --i){
        while(!gr.empty() && a[gr.top()] <= a[i]) gr.pop();
        if(gr.empty()) greater[i] = -1;
        else greater[i] = gr.top();
        gr.push(i);
        
        while(!sm.empty() && a[sm.top()] >= a[i]) sm.pop();
        if(sm.empty()) smaller[i] = -1;
        else smaller[i] = sm.top();
        sm.push(i);
    }
    for(int i = 0; i < n; ++i){
        if(greater[i] == -1 || smaller[greater[i]] == -1) cout << "-1 ";
        else cout << a[smaller[greater[i]]] << ' ';
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}   