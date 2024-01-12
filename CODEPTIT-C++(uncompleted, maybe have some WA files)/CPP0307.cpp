#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        map<string, int> mp;
        stringstream ss(s2);
        string tmp;
        while(ss >> tmp) ++mp[tmp];
        stringstream ss1(s1);
        vector<string> res;
        while(ss1 >> tmp){
            if(!mp[tmp]){
                ++mp[tmp];
                res.push_back(tmp);
            }
        }
        sort(begin(res), end(res));
        for(string x : res) cout << x << ' ';
        cout << '\n';
    }
}   