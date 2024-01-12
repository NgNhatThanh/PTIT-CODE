#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct SinhVien{
    string ten, lop, msv;
    float d1, d2, d3;
};

void nhap(SinhVien &a){
    cin >> a.msv;
    scanf("\n");
    getline(cin, a.ten);
    cin >> a.lop >> a.d1 >> a.d2 >> a.d3;
}

int cmp(SinhVien a, SinhVien b){
    return a.msv < b.msv;
}

void sap_xep(SinhVien a[], int n){
    sort(a, a+n, cmp);
}

void in_ds(SinhVien a[], int n){
    int stt = 1;
    for(int i=0; i<n; ++i){
        cout << stt++ << ' ' << a[i].msv << ' ' << a[i].ten << ' ' << a[i].lop << ' ' << setprecision(1) << fixed << a[i].d1 << ' ' << a[i].d2 << ' ' << a[i].d3 << '\n';
    }
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}