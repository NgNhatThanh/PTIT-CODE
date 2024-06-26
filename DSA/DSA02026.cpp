#include <bits/stdc++.h>
#define ll long long
using namespace std;

string s;
int ok;

char tt[] = {'+', '-'};

int cal(int a, int b, char tt){
    if(tt == '+') return a + b;
    return a - b;
}

int check(){
    int a = stoi(s.substr(0, 2)), b = stoi(s.substr(5, 2));
    string kq = to_string(cal(a, b, s[3]));
    if(kq[0] == '-' || kq.size() != 2) return 0;
    if((s[10] == kq[0] || s[10] == '?') && (s[11] == kq[1] || s[11] == '?')){
        s[10] = kq[0];
        s[11] = kq[1];
        return 1;
    }
    return 0;
}

void Try(int i){
    if(ok) return;
    if(i == 7){
        if(check()){
            cout << s << '\n';
            ok = 1; 
        }
        return;
    } 
    if(s[i] == '?'){
        if(i != 3){
            for(int j = 0 + (i == 0 || i == 5); j <= 9; ++j){
                s[i] = char(j + '0');
                Try(i + 1);
                s[i] = '?';
            }
        }
        else{
            for(int j = 0; j < 2; ++j){
                s[i] = tt[j];
                Try(i + 1);
                s[i] = '?';
            }
        }
    }
    else Try(i + 1);
}

void solve(){
    getline(cin, s);
    if(s[3] == '*' || s[3] == '/') cout << "WRONG PROBLEM!\n";
    else{
        Try(0);
        if(!ok) cout << "WRONG PROBLEM!\n";
        ok = 0;
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    cin.ignore();
    while(t--){
        solve();
    }
}