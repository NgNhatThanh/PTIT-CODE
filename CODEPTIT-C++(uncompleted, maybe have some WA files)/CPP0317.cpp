#include <bits/stdc++.h>
using namespace std;

string check(string s){
    int l = 0, r = s.size() - 1;
    while(l <= r){
        if(s[l] != s[r] || (s[l] - '0') % 2 || (s[r] - '0') % 2) return "NO";
        ++l; --r;
    }
    return "YES";
}

int main() 
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << check(s) << '\n';
    }
}   