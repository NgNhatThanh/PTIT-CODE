#include <bits/stdc++.h>
using namespace std;

int n, ok = 1;
int a[25];

int check(){
    int l = 1, r = n;
    while(l < r){
        if(a[l] != a[r]) return 0;
        ++l; --r;
    }
    return 1;
}

void sinh(){
    int i = n;
    while(i && a[i]) a[i--] = 0;
    if(!i) ok = 0;
    else a[i] = 1;
}

int main(){
    cin >> n;
    while(ok){
        if(check()) for(int i=1; i<=n; ++i) cout << a[i] << ' ';
        cout << '\n';
        sinh(); 
    }
}