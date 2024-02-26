#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    getline(cin, s);
    string del;
    cin >> del;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        if(tmp != del) cout << tmp << ' ';
    }
    cout << '\n';
}   