#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; ++i) a[i] = i+1;
        do{
            for(int x : a) cout << x;
            cout << ' ';
        }
        while(next_permutation(a, a+n));
        cout << '\n';
    }
}