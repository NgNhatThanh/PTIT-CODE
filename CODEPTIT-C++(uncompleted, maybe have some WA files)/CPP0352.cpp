#include <bits/stdc++.h>
using namespace std;

map<string, int> mp;

int main() {
	int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        string ten;
        string dem = "";
        while(ss >> tmp){
            for(char &x : tmp) x = tolower(x);
            ten = tmp;
            dem += tmp[0]; 
        }
        dem.pop_back();
        ten += dem;
        ++mp[ten];
        if(mp[ten] >= 2) ten += (char)(mp[ten] + '0');
        cout << ten << "@ptit.edu.vn\n";
    }
}