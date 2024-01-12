#include <bits/stdc++.h>
#define ll long long
using namespace std;

string hieu(string a, string b){
    int ma = max(a.size(), b.size());
    while(a.size() < ma) a = "0" + a;
    while(b.size() < ma) b = "0" + b;
    if(a < b) swap(a, b);
    string res = "";
    int du = 0;
    for(int i=ma-1; i>=0; --i){
        int y = b[i] - '0' + du;
        du = 0;
        int x = a[i] - '0';
        if(x < y){
            x += 10;
            ++du;
        }
        x -= y;
        res.push_back((char)(x + '0'));
    }
    reverse(begin(res), end(res));
    return res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        cout << hieu(a, b) << '\n';
    }
}   