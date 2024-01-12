#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    vector<string> res;
    string tmp;
    while(ss >> tmp){
        for(char &x : tmp) x = tolower(x);
        tmp[0] = toupper(tmp[0]);
        res.push_back(tmp);
    }
    for(int i=0; i<res.size(); ++i){
        if(i == res.size()-1){
            for(char &x : res[i]) x = toupper(x);
        }
        cout << res[i];
        if(i == res.size() - 2) cout << ", ";
        else cout << ' ';
    }
}