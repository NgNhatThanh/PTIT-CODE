#include <bits/stdc++.h>
#define ll long long
using namespace std;

int nt[10005];

void sang(){
    nt[1] = 1;
    for(int i=2; i<=sqrt(10000); ++i){
        for(int j=i*i; j<=10000; j+=i) nt[j] = 1; 
    }
}

int main()
{
    sang();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=2; i<n; ++i){
            if(!nt[i] && !nt[n-i]){
                cout << i << ' ' << n-i << '\n';
                break;
            }
        }
    }
}