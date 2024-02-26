#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    map<string, int> mp;
    set<string> hop, giao;
    ifstream in;
    in.open("DATA1.in");
    string s;
    while(in >> s){
        for(char &x : s) x = tolower(x);
        if(!mp[s]){
            ++mp[s];
            hop.insert(s);
        }
    }
    in.close();
    ifstream inp;
    inp.open("DATA2.in");
    while(inp >> s){
        for(char &x : s) x = tolower(x);
        if(!mp[s]){
            hop.insert(s);
        }
        else giao.insert(s);
    }
    for(string x : hop) cout << x << ' ';
    cout << '\n';
    for(string x : giao) cout << x << ' ';
}
