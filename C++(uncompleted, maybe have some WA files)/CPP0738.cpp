#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        int res = 0;
        int check = 1;
        while(check){
            check = 0;
            for(int &x : a){
                if(x%2){
                    --x; ++res;
                }
            }
            for(int &x : a) x /= 2;
            ++res;
            for(int &x : a){
                if(x){
                    check = 1;
                    break;
                }
            }
        }
        cout << res - 1 << '\n';
    }
}
