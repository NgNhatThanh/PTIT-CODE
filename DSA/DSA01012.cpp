#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

/*
Một dãy gray độ dài n có thể sinh ra bằng cách:
- Nửa đầu là "0" + dãy gray độ dài n - 1;
- Nửa sau là "1" + dãy gray độ dài n - 1 theo thứ tự đảo
*/

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
    int n;
    cin >> n;
    vector<string> res = grayGen(n);
    for(string x : res) cout << x << ' ';
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