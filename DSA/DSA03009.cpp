#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

struct Job{
    int id, deadline, profit;
    void nhap(){
        cin >> id >> deadline >> profit;
    }
};

int cmp(Job a, Job b){
    return a.profit > b.profit;
}

void solve(){
    int n;
    cin >> n;
    Job a[n];
    for(auto &x : a) x.nhap();
    sort(a, a + n, cmp);
    int jobAmount = 0;
    int sumProfit = 0;
    int takenId[n + 1] = {};
    for(int i = 0; i < n; ++i){
        for(int j = min(n, a[i].deadline); j >= 1; --j){
            if(!takenId[j]){
                ++jobAmount;
                sumProfit += a[i].profit;
                takenId[j] = 1;
                break;
            }
        }
    }
    cout << jobAmount << ' ' << sumProfit << '\n';
}

int main(){
    faster()
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}