#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct ThoiGian{
    int gio, phut, giay;
};

int cmp(ThoiGian a, ThoiGian b){
    if(a.gio == b.gio){
        if(a.phut == b.phut) return a.giay < b.giay;
        return a.phut < b.phut;
    }
    return a.gio < b.gio;
}

int main() {
	int n;
    cin >> n;
    ThoiGian a[n];
    for(auto &x : a) cin >> x.gio >> x.phut >> x.giay;
    sort(a, a+n, cmp);
    for(auto x : a) cout << x.gio << ' ' << x.phut << ' ' << x.giay << '\n';
}