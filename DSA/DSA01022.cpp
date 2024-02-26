#include <bits/stdc++.h>
using namespace std;

vector<int> init(int n){
    vector<int> res;
    for(int i = 1; i <= n; ++i) res.push_back(i);
    return res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int &x : v) cin >> x;
        vector<int> perm = init(n);
        int cnt = 1;
        do{
            if(perm == v) break;
            ++cnt;
        }
        while(next_permutation(begin(perm), end(perm)));
        cout << cnt << '\n';
    }
}