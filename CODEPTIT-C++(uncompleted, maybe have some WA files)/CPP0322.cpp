#include <bits/stdc++.h>
using namespace std;

string tong(string a, string b){
    int ma = max(a.size(), b.size());
    while(a.size() < ma) a = "0" + a;
    while(b.size() < ma) b = "0" + b;
    string res = "";
    int du = 0;
    for(int i=ma-1; i>=0; --i){
        int k = a[i] + b[i] - 2 * '0' + du;
        du = 0;
        if(k >= 10){
            ++du;
            k -= 10;
        }        
        res.push_back((char)(k + '0'));
    }
    if(du) res.push_back((char)(du + '0'));
    reverse(begin(res), end(res));
    return res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        cout << tong(a, b) << '\n';
    }
}   