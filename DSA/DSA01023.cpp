#include <bits/stdc++.h>
using namespace std;

vector<int> C;
int n, k;

void init(){
    C.clear();
    for(int i = 1; i <= k; ++i) C.push_back(i);
}

void sinh(){
    int i = k - 1;
    while(i >= 0 && C[i] == n - k + i + 1) --i;
    if(i >= 0){
        ++C[i];
        for(++i; i < k ; ++i) C[i] = C[i - 1] + 1;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vector<int> v(k);
        for(int &x : v) cin >> x;
        init();
        int cnt = 1;
        while(v != C){
            ++cnt;
            sinh();
        }
        cout << cnt << '\n';
    }
}