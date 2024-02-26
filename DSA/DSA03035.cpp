#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n], dp[n + 1] = {}, cnt = 0; 
    // dp[i] là dãy con tăng dài nhất với phần tử cuối là i
    // (các phần tử liên tiếp trong dãy con chênh nhau 1 đơn vị)
    for(int &x : a){
        cin >> x;
        dp[x] = dp[x - 1] + 1;
        cnt = max(cnt, dp[x]);
    }
    cout << n - cnt;
}