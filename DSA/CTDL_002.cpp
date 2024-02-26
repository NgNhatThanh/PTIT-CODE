#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<vector<int>> res;
    int a[n];
    for(int &x : a) cin >> x;
    for(int i=0; i < (1<<n); ++i){
        int sum = 0;
        vector<int> tmp;
        for(int j=0; j<n; ++j){
            if(i & (1<<j)){
                sum += a[j];
                tmp.push_back(a[j]);
            }
        }
        if(sum == k) res.push_back(tmp);
    }
    sort(begin(res), end(res));
    for(int i=res.size()-1; i>=0; --i){
        for(int x : res[i]) cout << x << ' ';
        cout << '\n';
    }
    cout << res.size();
}