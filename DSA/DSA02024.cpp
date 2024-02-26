#include <bits/stdc++.h>
using namespace std;

int n, a[20];
vector<string> ans;
vector<vector<int>> res;
vector<int> seq;

int cmp(vector<int> a, vector<int> b){
    string A = "", B = "";
    for(int x : a) A += to_string(x);
    for(int x : b) B += to_string(x);
    return A <= B;
}

void solve(int i, int prev = -1, int cnt = 0){
    if(cnt >= 2){
        res.push_back(seq);
    }
    if(i == n) return;
    for(; i < n; ++i){
        if(a[i] > prev){
            seq.push_back(a[i]);
            solve(i + 1, a[i], cnt + 1);
            seq.pop_back();
        }
    }
}

int main(){
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
    solve(0);
    for(auto x : res){
        string tmp = "";
        for(int k : x) tmp += to_string(k) + " ";
        ans.push_back(tmp);
    }
    sort(begin(ans), end(ans));
    for(string x : ans) cout << x << '\n';
}