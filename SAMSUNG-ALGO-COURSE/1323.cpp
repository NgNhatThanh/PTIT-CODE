#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll res = -1;
int ok = 1;

void sinh(vector<int> &bit){
    int i = bit.size() - 1;
    while(i >= 0 && bit[i] == 1){
        bit[i] = 0;
        i--;
    }
    if(i < 0) ok = 0;
    else bit[i] = 1;
}

int check0(string s){
    for(char &x : s){
        if(x=='0') return 1;
    }
    return 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        ll a = stoll(s);
        vector<int> bit(s.size(), 0);
        while(ok){
            ll tmp = 0;
            for(int i=0; i<s.size(); ++i){
                if(!bit[i]) tmp = tmp*10 + (s[i] - '0'); 
            }   
            if(cbrt(tmp) == (int)cbrt(tmp)){
                res = max(res, tmp);
            }
            sinh(bit);
        }
        if(!check0(s)){
            if(!res) res = -1;
        }
        cout << res << '\n';
        res = -1;
        ok = 1;
    }   
}