#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << 1 << ' ';
        for(int i=2; i<=n; ++i){
            int ok = 0;
            for(int j=2; j<=sqrt(n); ++j){
                if(i%j==0){
                    ok = 1;
                    cout << j << ' ';
                    break;
                }
            }
            if(!ok) cout << i << ' ';
        }
        cout << '\n';
    }
}

