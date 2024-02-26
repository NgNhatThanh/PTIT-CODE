#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    cin >> s;
    if(s[0] == '0') cout << "0\n";
    else{
        int n = s.size();
        s = ' ' + s;
        int dp[n + 1][3] = {};
        /*
        dp[i][j] là số lượng cách giải mã khi xét đến ký tự thứ i, trong đó số cuối cùng 
        được tạo từ j ký tự cuối
        */
        dp[1][1] = 1;
        for(int i = 2; i <= n; ++i){
            if(s[i] != '0') dp[i][1] = dp[i - 1][2] + dp[i - 1][1];
            int tmp = (s[i - 1] - '0') * 10 + s[i] - '0';
            if(tmp >= 10 && tmp <= 26) dp[i][2] = dp[i - 2][1] + dp[i - 2][2] + (i == 2);  
        }
        cout << dp[n][1] + dp[n][2] << '\n';
    }
}

int main(){ 
    int t = 1;
    cin >> t;
    while(t--){
        solve();        
    }
}