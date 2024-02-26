#include <bits/stdc++.h>
using namespace std;

char button(char x){
    x = tolower(x);
    switch (x){
        case 'a' : case 'b' : case 'c': return '2';
        case 'd' : case 'e' : case 'f': return '3';
        case 'g' : case 'h' : case 'i': return '4';
        case 'j' : case 'k' : case 'l': return '5';
        case 'm' : case 'n' : case 'o': return '6';
        case 'p' : case 'q' : case 'r': case 's': return '7';
        case 't' : case 'u' : case 'v': return '8';
        case 'w' : case 'x' : case 'y': case 'z': return '9';
    }
}

string check(string s){
    int l = 0, r = s.size()-1;
    while(l < r){
        if(s[l] != s[r]) return "NO\n";
        ++l; --r;
    }
    return "YES\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string so = "";
        for(char x : s) so += button(x);
        cout << check(so);  
    }
}   