#include <bits/stdc++.h>
#define ll long long
using namespace std;

int stt = 1;

struct MatHang{
    string ten, nhom;
    int ma;
    float mua, ban, lai;
};

int cmp(MatHang a, MatHang b){
    return a.lai > b.lai;
}

int main(){
    int n;
    cin >> n;
    MatHang a[n];
    for(auto &x : a){
        x.ma = stt++;
        scanf("\n");
        getline(cin, x.ten);
        getline(cin, x.nhom);
        cin >> x.mua >> x.ban;
        x.lai = x.ban - x.mua;
    }
    sort(a, a+n, cmp);
    for(auto x : a){
        cout << x.ma << ' ' << x.ten << ' ' << x.nhom << ' ' << setprecision(2) << fixed << x.lai << '\n';
    }
}