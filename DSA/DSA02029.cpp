#include <bits/stdc++.h>
using namespace std;

void solve(char source, char mid, char des, int n){
    if(n == 1){
        cout << source << " -> " << des << '\n';
        return;
    }
    solve(source, des, mid, n - 1);
    solve(source, mid, des, 1);
    solve(mid, source, des, n - 1);
}

int main(){
    int n;
    cin >> n;
    solve('A', 'B', 'C', n);
}