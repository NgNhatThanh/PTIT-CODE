#include <bits/stdc++.h>
#define ll long long
using namespace std;

int f[10];

int check(int n){
    int can = sqrt(n);
    for(int i=2; i<=can; ++i){
        if(n % i == 0) return 0;
    }
    return 1;
}

void caltang(int len, int i, int k, int prev){
    if(i > len){
        f[len] += check(k);
        return;
    }
    for(int j=prev+1; j<=9; ++j) caltang(len, i+1, k*10+j, j);
}

void calgiam(int len, int i, int k, int prev){
    if(i > len){
        f[len] += check(k);
        return;
    }
    for(int j=prev-1; j>=0; --j) calgiam(len, i+1, k*10+j, j);
}

void init(){
    for(int i=2; i<=9; ++i){
        caltang(i, 1, 0, 0);
        calgiam(i, 1, 0, 10);
    }
}

int main(){
    init();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << f[n] << '\n';
    }
}

