#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define maxn 1000005

vector<int> nt;
int nto[maxn];

void sang(){
    for(int i=2; i<=sqrt(maxn); ++i){
        for(int j=i*i; j<=maxn; j+=i) nto[j] = 1;
    }
    for(int i=2; i<=maxn-5; ++i){
        if(!nto[i]) nt.push_back(i);
    }
}

int main() {
    sang();
    int t;
    cin >> t;
    while(t--){
        ll l, r;
        cin >> l >> r;
        int res = upper_bound(begin(nt), end(nt), (int)sqrt(r)) - lower_bound(begin(nt), end(nt), (int)sqrt(l)) ;
        cout << res << '\n';
    }
}
