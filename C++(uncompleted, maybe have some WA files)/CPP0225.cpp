#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n][n];
        int sum = 0;
        int res = 0;
        int cot[n] = {}, hang[n] = {};
        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                cin >> a[i][j];
                cot[j] += a[i][j];
                hang[i] += a[i][j];
                sum = max({sum, hang[i], cot[j]});
            }
        }
        for(int i=0; i<n; ++i){
            if(hang[i] < sum){
                int du = sum - hang[i];
                vector<pair<int, int>> v;
                for(int j=0; j<n; ++j){
                    if(cot[j] < sum) v.push_back({cot[j], j});
                } 
                for(auto x : v){
                    if(du + x.first > sum){
                        res += sum - x.first;
                        du -= sum - x.first;
                        cot[x.second] = sum; 
                    }
                    else{
                        res += du;
                        cot[x.second] += du;
                        du = 0;
                    }
                }
            }
        }
        cout << res << '\n';
    }
}   