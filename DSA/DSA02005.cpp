#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int a[n];
        for(int i = 0; i < n; ++i) a[i] = i;
        do{
            for(int x : a) cout << s[x];
            cout << ' ';
        } 
        while(next_permutation(a, a + n));
        cout << '\n';
    }
}