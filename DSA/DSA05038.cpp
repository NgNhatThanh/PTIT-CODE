#include <bits/stdc++.h>
#define ll long long
using namespace std;

// mp[i] lưu các pair có thể là cuối cùng trong dãy tăng độ dài i
map<int, int> mp[100005];

// Check xem có thể thêm {x, y} vào dãy tăng độ dài m không
// bằng việc kiểm tra có pair cuối nào nhỏ hơn {x, y} không
int Find(int m, int x, int y){
    map<int, int>::iterator f = mp[m].lower_bound(x);
    if(f == mp[m].begin()) return 0;
    --f;
    if(f -> second >= y) return 0;
    return 1;
}

// Thêm {x, y} vào mp[m], đồng thời xóa các pair lớn hơn
void add(int m, int x, int y){
    map<int,int>::iterator st = mp[m].lower_bound(x), en = st;
    while (st != mp[m].end() && en -> second >= y) ++en;
    mp[m].erase(st, en);
    mp[m].insert({x, y});
}

void solve(){
    int n, x, y;
    cin >> n >> x >> y;
    int res = 1, l, r, m;
    while(n--){
        cin >> x >> y;
        l = 0, r = res;
        while(l < r){
            m = (l + r + 1) / 2;
            if(Find(m, x, y)) l = m;
            else r = m - 1;        
        }
        if(res <= l) res = l + 1;
        add(l + 1, x, y);
    }
    cout << res;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}