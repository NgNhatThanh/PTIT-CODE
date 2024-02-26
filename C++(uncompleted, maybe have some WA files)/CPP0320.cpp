#include <bits/stdc++.h>
#define ll long long
using namespace std;

string check(string s){
    if(s[0] == '0') return "INVALID";
    map<char, int> mp;
    for(char x : s){
        if(isdigit(x)) ++mp[x];
        else return "INVALID";
    }
    if(mp.size() == 10) return "YES";
    else return "NO";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << check(s) << '\n';
    }
}   