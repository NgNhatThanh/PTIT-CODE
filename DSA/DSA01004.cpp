#include <bits/stdc++.h>
using namespace std;

int a[15];

int n, k, ok = 1;

void init(){
    for(int i = 0; i < k; ++i) a[i] = i + 1;
}

void sinh(){
    int i = k - 1;
    while(i >= 0 && a[i] == n - k + i + 1) --i;
    if(i >= 0){
        ++a[i++];
        for(; i < k; ++i) a[i] = a[i - 1] + 1;
    }
    else ok = 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        init();
        while(ok){
            for(int i = 0; i < k; ++i) cout << a[i];
            cout << ' ';
            sinh();
        }
        ok = 1;
        cout << '\n';
    }
}