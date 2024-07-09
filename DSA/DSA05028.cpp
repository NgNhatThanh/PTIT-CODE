#include <bits/stdc++.h>
#define ll long long
using namespace std;

//dp[i][j] là số phép biến đổi ít nhất để biến i ký tự đầu của a thành j ký tự đầu của b

void solve(){
    string a, b;
    cin >> a >> b;
    int dp[a.size() + 1][b.size() + 1] = {};
    for(int i = 1; i <= a.size(); ++i) dp[i][0] = i;
    for(int j = 1; j <= b.size(); ++j) dp[0][j] = j;
    for(int i = 1; i <= a.size(); ++i){
        for(int j = 1; j <= b.size(); ++j){
            if(a[i - 1] == b[j - 1]) dp[i][j] = dp[i - 1][j - 1];
            else dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
        }
    }
    cout << dp[a.size()][b.size()] << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}   