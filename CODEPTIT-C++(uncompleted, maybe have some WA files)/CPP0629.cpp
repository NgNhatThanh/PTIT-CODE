#include <bits/stdc++.h>
using namespace std;

struct DoanhNghiep{
    string ten, ma;
    int sl;
};  

int cmp(DoanhNghiep a, DoanhNghiep b){
    if(a.sl == b.sl) return a.ma < b.ma;
    return a.sl > b.sl;
}

int main() {
	int n;
    cin >> n;
    DoanhNghiep a[n];
    for(auto &x : a){
        cin >> x.ma;
        cin.ignore();
        getline(cin, x.ten);
        cin >> x.sl;
    }
    sort(a, a+n, cmp);
    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << l << " DEN " << r << " SINH VIEN:\n";
        for(auto x : a){
            if(x.sl >= l && x.sl <= r) cout << x.ma << ' ' << x.ten << ' ' << x.sl << '\n';
        }
    }
}