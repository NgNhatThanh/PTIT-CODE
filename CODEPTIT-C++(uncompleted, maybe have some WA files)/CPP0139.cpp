#include <bits/stdc++.h>
#define ll long long
using namespace std;

int check(int n){
    for(int i=2; i<=sqrt(n); ++i){
        if(n%i==0) return 1;
    }
    return 0;
}

int chuso(int n){
    int res = 0;
    while(n){
        res += n%10;
        n /= 10;
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(check(n)){
            int cs = chuso(n);
            int tmp = 0;
            for(int i=2; i<=sqrt(n); ++i){
                while(n%i==0){
                    tmp += chuso(i);
                    n /= i;
                }
            } 
            if(n > 1) tmp += chuso(n);
            if(tmp == cs) cout << "YES\n";
            else cout << "NO\n";
        }
        else cout << "NO\n";
    }
}
