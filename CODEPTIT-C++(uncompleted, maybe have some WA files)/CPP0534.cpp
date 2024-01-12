#include <bits/stdc++.h>
#define ll long long
using namespace std;

int check(string s){
    int l = 0, r = s.size() - 1;
    while(l < r){
        if(s[l] != s[r]) return 0;
        ++l; --r;
    }
    return (s.size() > 1);
}

int cmp(string a, string b){
    while(a.size() < b.size()) a = "0" + a;
    while(b.size() < a.size()) b = "0" + b;
    return a > b;
}

int main() {
	string s;
    map<string, int> mp;
    while(cin >> s){
        if(check(s)) ++mp[s];
    }
    vector<string> res;
    for(auto x : mp) res.push_back(x.first);
    sort(begin(res), end(res), cmp);
    for(string x : res) cout << x << ' ' << mp[x] << '\n';
}