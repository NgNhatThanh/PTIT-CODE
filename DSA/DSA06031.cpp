#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    deque<int> q;
    for(int i = 0; i < n; ++i){
        while(!q.empty() && a[q.back()] <= a[i]) q.pop_back();
        q.push_back(i);
        if(q.front() < i - k + 1) q.pop_front();
        if(i >= k - 1) cout << a[q.front()] << ' ';
    }
    cout << '\n';
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}