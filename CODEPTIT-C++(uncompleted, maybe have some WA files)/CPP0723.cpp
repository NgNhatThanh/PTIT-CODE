#include <bits/stdc++.h>
using namespace std;

string split(char a){
    string tmp(1, a);
    switch(a){
        case '2': case '3': case '5': case '7': return tmp;
        case '4': 
            return "322";
        case '6':
            return "35";
        case '8':
            return "2227";
        case '9': 
            return "7332";
        default: return "";
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        string res = "";
        for(char x : s){
            res += split(x);
        }
        sort(begin(res), end(res), greater<char>());
        cout << res << '\n';
    }
}