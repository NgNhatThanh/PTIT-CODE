#include <bits/stdc++.h>
using namespace std;

int n, ok = 1;
int a[16];

int check(){
    if(!a[0] || a[n - 1]) return 0;
    for(int i = 1; i < n; ++i){
        if(a[i] && a[i] == a[i - 1]) return 0;
    }
    return 1;
}

void sinh(){
    int i = n - 1;
    while(i >= 0 && a[i]) a[i--] = 0;
    if(i >= 0) a[i] = 1;
    else ok = 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        while(ok){
            if(check()){
                for(int i = 0; i < n; ++i){
                    if(a[i]) cout << 'H';
                    else cout << 'A';
                }
                cout << '\n';
            }
            sinh();
        }
        ok = 1;
    }
}