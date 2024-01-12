#include <bits/stdc++.h>
using namespace std;

string na = "aeiouyAEIOUY";

int main() 
{
    string s;
    cin >> s;
    for(char x : s){
        if(na.find(x) == string::npos) cout << '.' << (char)tolower(x);
    }
}   