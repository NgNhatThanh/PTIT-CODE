#include <bits/stdc++.h>
#define ll long long
using namespace std;

int dx[] = {-2, -2, 2, 2, -1, -1, 1, 1};
int dy[] = {1, -1, 1, -1, 2, -2, 2, -2};

int check(int x, int y){
    return x && y && x <= 8 && y <= 8;
}

void solve(){
    string st, en;
    cin >> st >> en;
    int stx = st[0] - 'a' + 1, sty = st[1] - '0';
    int enx = en[0] - 'a' + 1, eny = en[1] - '0';
    queue<pair<int, int>> q;
    q.push({stx, sty});
    map<pair<int, int>, int> mp;
    mp[{stx, sty}] = 1;
    while(!mp[{enx, eny}]){
        int x = q.front().first, y = q.front().second;
        q.pop();
        for(int i = 0; i < 8; ++i){
            int newx = x + dx[i];
            int newy = y + dy[i];
            if(check(newx, newy) && !mp[{newx, newy}]){
                mp[{newx, newy}] = mp[{x, y}] + 1;
                q.push({newx, newy});
            }
        }
    }
    cout << mp[{enx, eny}] - 1 << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}   