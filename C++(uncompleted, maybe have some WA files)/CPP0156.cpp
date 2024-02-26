#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int b, p;
        cin >> b >> p;
        vector<int> v;
        for(int i=1; i<=min(b, p); ++i){
            if(1ll*i*i%p == 1) v.push_back(i);
        }
        int res = v.size();
        for(int x : v){
            res += (b-x)/p;
        }
        cout << res << '\n';
    }
}
