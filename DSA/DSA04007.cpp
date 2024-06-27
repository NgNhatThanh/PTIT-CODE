#include <bits/stdc++.h>
#define ll long long
using namespace std;

string cong(string a, string b, int k){
    if(a.size() < b.size()) swap(a, b);
    reverse(begin(a), end(a));
    reverse(begin(b), end(b));
    string res = "";
    int du = 0;
    for(int i = 0; i < a.size(); ++i){
        int tmp = a[i] - '0' + du;
        du = 0;
        if(i < b.size()) tmp += b[i] - '0';
        if(tmp >= k){
            du = 1;
            tmp -= k;
        }
        res += char(tmp + '0');
    }
    if(du) res += '1';
    reverse(begin(res), end(res));
    return res;
}

void solve(){
    int k;
    string a, b;
    cin >> k >> a >> b;
    cout << cong(a, b, k) << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}