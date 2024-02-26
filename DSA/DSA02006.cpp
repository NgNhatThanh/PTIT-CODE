#include <bits/stdc++.h>
using namespace std;

int n, k, ok;
int a[10];
vector<int> res;

void process(int i, int sum = 0){
    if(sum == k){
        ok = 1;
        cout << '[';
        for(int j = 0; j < res.size(); ++j){
            cout << res[j];
            if(j < res.size() - 1) cout << ' ';
        }
        cout << "] ";
    }
    if(i == n) return;
    for(; i < n; ++i){
        if(sum + a[i] <= k){
            res.push_back(a[i]);
            process(i + 1, sum + a[i]);
            res.pop_back();
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 0; i < n; ++i) cin >> a[i];
        sort(a, a + n);
        process(0);
        if(!ok) cout << -1;
        cout << '\n';
        ok = 0;
        res.clear();
    }
}