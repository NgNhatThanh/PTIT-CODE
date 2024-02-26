#include <bits/stdc++.h>
using namespace std;

char a;
int n;
string ans = "";

void solve(int i, int cnt){
    for(; i <= (a - 'A'); ++i){
        ans += char(i + 'A');
        if(cnt == n) cout << ans << '\n';
        else solve(i, cnt + 1);
        ans.pop_back();
    }
}

int main(){
    cin >> a >> n;
    solve(0, 1);
}