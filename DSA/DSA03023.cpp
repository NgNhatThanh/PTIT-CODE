#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int res, ok, n;
string s;

void Swap(int l, int idx, char c){
    while(l < n){
        if(s[l] == c){
            ok = 1;
            swap(s[l], s[idx]);
            ++res;
            return;
        }
        ++l;
    }
}

void solve(){
    cin >> n >> s;
    int blue = 0, white = 0;
    for(char x : s){
        if(x == 'X') ++blue;
        else if(x == 'T') ++white;
    }
    for(int i = 0; i < blue; ++i){
        if(s[i] == 'T') Swap(blue, i, 'X');
        else if(s[i] == 'D'){
            ok = 0;
            Swap(blue + white, i, 'X');
            if(!ok) Swap(blue, i, 'X');
        }
    }
    for(int i = blue; i < blue + white; ++i){
        if(s[i] == 'D') Swap(blue + white, i, 'T');
    }
    cout << res;
}

int main(){
    faster()
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}