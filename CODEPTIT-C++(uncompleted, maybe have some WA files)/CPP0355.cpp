#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    string cau = "";
    while(cin >> s){
        for(char &x : s) x = tolower(x);
        cau += s;
        if(s.back() == '.' || s.back() == '?' || s.back() == '!'){
            cau.pop_back();
            cau[0] -= 32;
            cout << cau << '\n';
            cau = "";
        }
        else cau += " ";
    }
}   