#include <bits/stdc++.h>
using namespace std;

int n, ok = 1;
int a[16]; // a[i] = 1 => 8; a[i] = 0 => 6

int check(){
    if(!a[0] || a[n - 1]) return 0;
    int count8 = 0, count6 = 0;
    for(int i = 0; i < n; ++i){
        if(a[i]){
            count6 = 0;
            ++count8;
            if(count8 > 1) return 0;
        }
        else{
            count8 = 0;
            ++count6;
            if(count6 > 3) return 0;
        }
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
    cin >> n;
    while(ok){
        if(check()){
            for(int i = 0; i < n; ++i) cout << a[i]*8 + (!a[i])*6;
            cout << '\n';
        }
        sinh();
    }
}