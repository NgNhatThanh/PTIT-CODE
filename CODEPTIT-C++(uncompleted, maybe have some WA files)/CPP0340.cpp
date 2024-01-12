#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
	cin >> t;
	while(t--){ 
		int m, n;
        cin >> m >> n;
        string s;
        cin >> s;
        ll dp[m][n] = {};
        for(int i=0; i<m; ++i){
            ++dp[i][(s[i] - '0')%n];
            if(i){
                for(int j=0; j<n; ++j){
                    dp[i][j] += dp[i-1][j];
                    dp[i][(j*10 + (s[i] - '0'))%n] += dp[i-1][j]; 
                }
            }
        }
        cout << dp[m-1][0] << '\n';
	}
}