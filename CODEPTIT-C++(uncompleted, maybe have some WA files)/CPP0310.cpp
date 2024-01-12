#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll ma(string s){
    for(char &x : s){
        if(x == '5') x = '6';
    }
    ll res = stoll(s);
    return res;
}

ll mi(string s){
    for(char &x : s){
        if(x == '6') x = '5';
    }
    ll res = stoll(s);
    return res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        cout << mi(a) + mi(b) << ' ' << ma(a) + ma(b) << '\n';
    }
}   