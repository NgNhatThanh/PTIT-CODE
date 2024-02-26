#include <bits/stdc++.h>
using namespace std;

int n, k, ok = 1;
int th[20];
vector<int> v;

void sinh(){
    int i = k - 1;
    while(i >= 0 && th[i] == n - k + i +1) --i;
    if(i >= 0){
        ++th[i];
        for(++i; i < k; ++i) th[i] = th[i - 1] + 1;
    }
    else ok = 0;
}

int main(){
    cin >> n >> k;
    set<int> se;
    int x;
    while(n--){
        cin >> x;
        se.insert(x);
    }
    n = se.size();
    for(int x : se) v.push_back(x);
    for(int i = 0; i < k; ++i) th[i] = i + 1;
    while(ok){
        for(int i = 0; i < k; ++i) cout << v[th[i] - 1] << ' ';
        cout << '\n';
        sinh();
    }
}