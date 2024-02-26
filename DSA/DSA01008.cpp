#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        const int bit = n;
        cin >> n >> k;
        for(int i = 0; i < (1 << n); ++i){
            int cnt = 0;
            string res = "";
            for(int j = n - 1; j >= 0; --j){
                if(i & (1 << j)){
                    ++cnt;
                    res += '1';
                }
                else res += '0';
            }
            if(cnt == k) cout << res << '\n';
        }
    }
}