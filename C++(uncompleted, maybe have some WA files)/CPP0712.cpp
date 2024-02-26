#include <bits/stdc++.h>
using namespace std;

int a[25];
int ok = 1;
int n, k;

void init(){
    for(int i=1; i<=k; ++i) a[i] = i;
}

void sinh(){
    int i = k;
    while(i && a[i] == n-k+i) --i;
    if(!i) ok = 0;
    else{
        ++a[i++];
        for(; i<=k; ++i) a[i] = a[i-1] + 1;
    }
}   

int main() {
	int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        init();
        while(ok){
            for(int i=1; i<=k; ++i) cout << a[i];
            cout << ' ';
            sinh();
        }
        ok = 1;
        cout << '\n';
    }
}