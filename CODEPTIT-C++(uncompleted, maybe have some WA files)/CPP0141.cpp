#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll fibo[93];

void init(){
    fibo[1] = 1;
    for(int i=2; i<=92; ++i) fibo[i] = fibo[i-1] + fibo[i-2];
}

int main()
{
    init();
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        int a = binary_search(fibo, fibo+93, n);
        if(a) cout << "YES\n";
        else cout << "NO\n";
    }
}