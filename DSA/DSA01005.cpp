#include <bits/stdc++.h>
using namespace std;

int a[10];

int n, ok = 1;

void init(){
    for(int i = 0; i < n; ++i) a[i] = i + 1;
}

void sinh(){
    int i = n - 2;
    while(i >= 0 && a[i] > a[i + 1]) --i;
    if(i >= 0){
        int j = n - 1;
        while(a[j] < a[i]) --j;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n);
    }
    else ok = 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        init();
        while(ok){
            for(int i = 0; i < n; ++i) cout << a[i];
            cout << ' ';
            sinh();
        }
        ok = 1;
        cout << '\n';
    }
}