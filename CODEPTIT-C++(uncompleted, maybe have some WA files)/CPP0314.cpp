#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    cin.ignore();
    string s;
    map<string, int> mp;
    while(n--){
        getline(cin, s);
        ++mp[s];
    }
    cout << mp.size();
}   