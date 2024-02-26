#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[k];
        for(int &x : a) cin >> x;
        int i = k - 1;
        while(i >= 0 && a[i] == n - k + i + 1) --i;
        if(i >= 0){
            ++a[i++];
            for(; i < k; ++i) a[i] = a[i - 1] + 1; 
        }
        else{
            for(i = 0; i < k; ++i) a[i] = i + 1;
        }
        for(int x : a) cout << x << ' ';
        cout << '\n';
    }
}