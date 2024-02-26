#include <bits/stdc++.h>
#define ll long long
using namespace std;

int phiham(int n){
    int res = n;
    int can = sqrt(n);
    for(int i=2; i<=can; ++i){
        if(n%i==0){
            res -= res/i;
            while(n%i==0) n /= i;
        }
    }
    if(n > 1) res -= res/n;
    return res;
}

int check(int n){
    if(n < 2) return 0;
    for(int i=2; i<=sqrt(n); ++i){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n; 
        cout << check(phiham(n)) << '\n';
    }
}

