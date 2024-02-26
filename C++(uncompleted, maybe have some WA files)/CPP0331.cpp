#include <bits/stdc++.h>
using namespace std;

string s;

string stringSum(string a, string b){
    string res = "";
    reverse(begin(a), end(a));
    reverse(begin(b), end(b));
    if(a.size() < b.size()) swap(a, b);
    int du = 0;
    for(int i=0; i<a.size(); ++i){
        int add = a[i] - '0' + du;
        du = 0;
        if(i<b.size()) add += b[i] - '0';
        if(add >= 10){
            ++du;
            add %= 10;
        }
        res.push_back(char(add + '0'));
    }
    if(du) res.push_back('1');
    reverse(begin(res), end(res));
    return res;
}

int checkSumString(int idx, int len1, int len2){
    string s1 = s.substr(idx, len1), s2 = s.substr(idx + len1, len2);
    string s3 = stringSum(s1, s2);
    int len3 = s3.size();
    int n = len3 + len2 + len1 + idx;
    if(n > s.size()) return 0;
    string tmp = s.substr(idx + len2 + len1, len3);
    if(s3 == tmp){
        if(n == s.size()) return 1;
        return checkSumString(idx + len1, len2, len3);
    }
    return 0;
}

void solve(){
    cin >> s;
    for(int i=1; i<s.size(); ++i){
        for(int j=1; j<s.size()-i; ++j){
            if(checkSumString(0, i, j)){
                cout << "Yes\n";
                return;
            }
        }
    }
    cout << "No\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
