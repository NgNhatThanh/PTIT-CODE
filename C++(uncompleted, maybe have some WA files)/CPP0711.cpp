#include <bits/stdc++.h>
using namespace std;

int n;

string nhiphan(int a){
    string s = "";
    while(a){
        s += (char)(a%2 + '0');
        a /= 2;
    }
    while(s.size() < n) s += "0";
    reverse(begin(s), end(s));
    return s;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0; i<(1<<n); ++i) cout << nhiphan(i) << ' ';
        cout << '\n';
    }
}