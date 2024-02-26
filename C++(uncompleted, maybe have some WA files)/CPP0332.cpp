#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string tmp;
    string res;
    string ten;
    while(ss >> tmp){
        res += tolower(tmp[0]);
    }
    res.pop_back();
    for(char &x : tmp) x = tolower(x);
    res = tmp + res + "@ptit.edu.vn";
    cout << res;
}