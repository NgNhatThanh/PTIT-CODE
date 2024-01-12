#include <bits/stdc++.h>
#define ll long long
using namespace std;

int chuso(string s){
    int res = 0;
    for(char x : s) res += x - '0';
    return res;
}

int check(string s){
    while(s.size() > 1){
        int k = chuso(s);
        if(k == 9) return 1;
        s = to_string(k);
    }
    if(chuso(s) == 9) return 1;
    return 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << check(s) << '\n';
    }
}   