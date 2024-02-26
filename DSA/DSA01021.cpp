#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[k];
        set<int> se;
        for(int &x : a){
            cin >> x;
            se.insert(x);
        }
        int i = k - 1;
        while(i >= 0 && a[i] == n - k + i + 1) --i;
        if(i >= 0){
            ++a[i];
            se.insert(a[i]);
            for(++i; i < k; ++i){
                a[i] = a[i - 1] + 1;
                se.insert(a[i]);
            }
            cout << se.size() - k << '\n';
        }
        else cout << k << '\n';
    }
}