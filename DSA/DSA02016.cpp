#include <bits/stdc++.h>
using namespace std;

int n, cnt;
int col[10], mainDia[20], subDia[20];

void solve(int i){
    if(i == n){
        ++cnt;
        return;
    }
    for(int j = 0; j < n; ++j){
        if(!col[j] && !mainDia[i - j + n] && !subDia[i + j - 1]){
            col[j] = mainDia[i - j + n] = subDia[i + j - 1] = 1;
            solve(i + 1);
            col[j] = mainDia[i - j + n] = subDia[i + j - 1] = 0;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        solve(0);
        cout << cnt << '\n';
        cnt = 0; 
    }
}