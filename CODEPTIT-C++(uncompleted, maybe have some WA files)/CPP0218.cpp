#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v;
        unordered_map<int, int> mp;
        int x;
        while(n--){
            cin >> x;
            if(!mp[x]){
                v.push_back(x);
                mp[x] = 1;
            }
        }
        if(v.size() == 1){
            cout << 0 << '\n';
            continue;
        }
        int ma = *max_element(begin(v), end(v));
        int res = 1;
        for(int i=2; i<=ma; ++i){
            int ok = 1;
            for(int x : v){
                if(x%i != ma%i){
                    ok = 0;
                    break;
                }
            }
            if(ok) ++res;
        }
        cout << res << '\n';
    }
}