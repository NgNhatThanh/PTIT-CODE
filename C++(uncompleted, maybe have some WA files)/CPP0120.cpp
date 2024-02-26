#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int m, n, a, b;
        cin >> m >> n >> a >> b;
        int res = 0;
        for(int i=m; i<=n; ++i){
            if(i%a==0 || i%b==0) ++res;
        }
        cout << res << '\n';
    }
}

