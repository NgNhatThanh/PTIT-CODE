#include <bits/stdc++.h>
using namespace std;

int v, e, x, y;

/*
Test bài này yếu, nếu đúng thì phải kiểm tra 
xem có tồn tại 2 thành phần liên thông mà 
số lượng đỉnh trong mỗi phần > 1 hay không
*/
void solve(){
    cin >> v >> e;
    int vao[v + 1] = {}, ra[v + 1] = {};
    while(e--){
        cin >> x >> y;
        ++ra[x];
        ++vao[y];
    }
    for(int i = 1; i <= v; ++i){
        if(vao[i] != ra[i]){
            cout << 0 << '\n';
            return;
        }
    }
    cout << 1 << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}