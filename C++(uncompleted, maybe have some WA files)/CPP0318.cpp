#include <bits/stdc++.h>
#define ll long long
using namespace std;

int check(string s){
    int ok1 = 1, ok2 = 1, ok3 = 1;
    string so = "";
    for(int i=5; i<s.size(); ++i){
        if(isdigit(s[i])) so += s[i];
    }
    for(int i=0; i<so.size(); ++i){
        if(so[i] != '6' && so[i] != '8') ok1 = 0;
        if(i>0){
            if(so[i] != so[i-1]) ok2 = 0;
            if(so[i] <= so[i-1]) ok3 = 0;
        }
    }
    return (ok1 || ok2 || ok3 || (so[0] == so[1] && so[1] == so[2] && so[3] == so[4]));
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(check(s)) cout << "YES\n";
        else cout << "NO\n";
    }
}   