#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int dem1 = 0, dem0 = 0;
        int res = 0;
        for(char x : s){
            if(x == '1'){
                ++dem1;
                if(dem0){
                    res += min(dem1, dem0/2)*3;
                    dem0 = 0;
                }
            }
            else ++dem0;
        }
        res += min(dem1, dem0/2)*3;
        cout << res << '\n';
    }
}
