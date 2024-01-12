#include <bits/stdc++.h>
using namespace std;

int p = 1e9+7;

int C[1005][1005];

void cal(){
    for(int i=0; i<=1000; ++i) C[i][0] = 1;
    for(int i=1; i<=1000; ++i){
        for(int j=1; j<=1000; ++j){
            if(i == j) C[i][j] = 1;
            else C[i][j] = (C[i-1][j-1] + C[i-1][j]) % p;
        }
    }
}

int main() {
    cal(); 
	int t;
    cin >> t;
    while(t--){
        int n, r;
        cin >> n >> r;
        cout << C[n][r] << '\n';
    }
}
