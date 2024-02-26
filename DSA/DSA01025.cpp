#include <bits/stdc++.h>
using namespace std;

int p[16];
int n, k, ok = 1;

void sinh(){
    int i = k - 1;
    while(i >= 0 && p[i] == n - k + i + 1) --i;
    if(i >= 0){
        ++p[i];
        for(++i; i < k; ++i) p[i] = p[i - 1] + 1;
    }
    else ok = 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 0; i < k; ++i) p[i] = i + 1;
        while(ok){
            for(int i = 0; i < k; ++i) cout << (char)(p[i] + 'A' - 1);
            cout << '\n';
            sinh();
        }  
        ok = 1;
    }
}