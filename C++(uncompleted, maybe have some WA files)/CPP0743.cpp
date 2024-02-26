#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        reverse(begin(s), end(s));
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            reverse(begin(tmp), end(tmp));
            cout << tmp << ' ';
        }
        cout << '\n';
    }
}