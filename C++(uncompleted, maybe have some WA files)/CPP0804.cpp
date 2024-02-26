#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    freopen("VANBAN.in", "r", stdin);
    string s;
    set<string> se;
    while(getline(cin, s)){
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            for(char &x : tmp) x = tolower(x);
            se.insert(tmp);
        }
    }
    for(string x : se) cout << x << '\n';
}
