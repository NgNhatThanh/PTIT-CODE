#include <bits/stdc++.h>
#define ll long long
using namespace std;

int id = 1;

struct NhanVien{
    string mnv, ten, sex, ngaySinh, diaChi, maThue, ngayKy;
    int ngay, thang, nam;
};  

void nhap(NhanVien &a){
    cin.ignore();
    getline(cin, a.ten);
    cin >> a.sex >> a.ngaySinh;
    cin.ignore();
    getline(cin, a.diaChi);
    cin >> a.maThue >> a.ngayKy;
    a.mnv = to_string(id++);
    while(a.mnv.size() < 5) a.mnv = "0" + a.mnv;
    int cnt = 0;
    int tmp = 0;
    for(char x : a.ngaySinh){
        if(x == '/'){
            if(!cnt) a.thang = tmp; // đề ghi là dd/mm/yyyy nhưng nhập dạng mm/dd/yyyy mới AC ?
            else a.ngay = tmp;
            tmp = 0; ++cnt;
        }
        else tmp = tmp*10 + x - '0';
    }
    a.nam = tmp;
}

int cmp(NhanVien a, NhanVien b){    
    if(a.nam == b.nam){
        if(a.thang == b.thang) return a.ngay < b.ngay;
        return a.thang < b.thang;
    }
    return a.nam < b.nam;
}

void sapxep(NhanVien a[], int n){
    sort(a, a+n, cmp);
}

void inds(NhanVien a[], int n){
    for(int i=0; i<n; ++i){
        cout << a[i].mnv << ' ' << a[i].ten << ' ' << a[i].sex << ' ' << a[i].ngaySinh << ' ' << a[i].diaChi << ' ' << a[i].maThue << ' ' << a[i].ngayKy << '\n';
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}