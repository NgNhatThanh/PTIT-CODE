#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

vector<string> grayGen(int n){
    if(n == 1) return {"0", "1"};
    vector<string> prevGray = grayGen(n - 1);
    vector<string> res;
    int k = prevGray.size();
    for(int i = 0; i < k; ++i){
        res.push_back("0" + prevGray[i]);
    }
    for(int i = k - 1; i >= 0; --i){
        res.push_back("1" + prevGray[i]);
    }
    return res;
} 

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    vector<string> gray = grayGen(n);
    int idx = 0;
    for(; idx < gray.size(); ++idx){
        if(gray[idx] == s) break;
    }
    bitset<10> bs(idx);
    cout << bs.to_string().substr(10 - n) << '\n';
}

int main(){
    faster()
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}