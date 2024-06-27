#include <bits/stdc++.h>
#define ll long long
using namespace std;

string C[101];

string cong(string a, string b){
    string res = "";
    reverse(begin(a), end(a));
    reverse(begin(b), end(b));
    int du = 0;
    for(int i = 0; i < a.size(); ++i){
        int k = a[i] - '0' + du;
        du = 0;
        if(i < b.size()) k += b[i] - '0';
        if(k >= 10){
            du = 1;
            k -= 10;
        }
        res += char(k + '0');
    }
    if(du) res += '1';
    reverse(begin(res), end(res));
    return res;
}

string nhan(string a, string b){
    reverse(begin(a), end(a));
    reverse(begin(b), end(b));
    vector<int> res(a.size() + b.size(), 0);
    for(int i = 0; i < a.size(); ++i){
        for(int j = 0; j < b.size(); ++j){
            res[i + j] += (a[i] - '0') * (b[j] - '0');
            if(res[i + j] >= 10){
                res[i + j + 1] += res[i + j] / 10;
                res[i + j] %= 10;
            }
        }
    }
    if(!res.back()) res.pop_back();
    string ans = "";
    for(int i = res.size() - 1; i >= 0; --i) ans += char(res[i] + '0');
    return ans;
}

void precal(){
    C[0] = "1";
    C[1] = "1";
    C[2] = "2";
    C[3] = "5";
    for(int i = 4; i <= 100; ++i){
        string ans = cong(C[i - 1], C[i - 2]);
        ans = nhan(ans, "2");
        for(int j = 2; j < i / 2; ++j){
            string tmp = nhan(C[j], C[i - j - 1]);
            tmp = nhan(tmp, "2");
            ans = cong(ans, tmp);
        }
        if(i % 2 == 1){
            int tmp = i / 2;
            string t = nhan(C[tmp], C[tmp]);
            ans = cong(ans, t);
        }
        C[i] = ans;
    }
}

void solve(){
    int n;
    cin >> n;
    cout << C[n] << '\n';
}

int main(){
    precal();
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}