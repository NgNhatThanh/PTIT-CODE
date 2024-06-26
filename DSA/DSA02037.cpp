#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<vector<int>> res;
vector<int> cur;
int nt[1500];

int check(int n){
    for(int i = 2; i <= sqrt(n); ++i){
        if(n % i == 0) return 0;
    }
    return 1;
}

void precal(){
    for(int i = 2; i < 1498; ++i) nt[i] = check(i);
}

void Try(int *a, int n, int i, int sum = 0){
    if(nt[sum]) res.push_back(cur);
    for(int j = i + 1; j < n; ++j){
        cur.push_back(a[j]);
        Try(a, n, j, sum + a[j]);
        cur.pop_back();
    }
}

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n, greater<int>());
    Try(a, n, -1);
    sort(begin(res), end(res));
    for(auto v : res){
        for(int x : v) cout << x << ' ';
        cout << '\n';
    }
    res.clear();
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