#include <bits/stdc++.h>
using namespace std;
#define ll long long

string chuanhoa(string date){
    int cnt = 0;
    string res = "";
    for(char x : date){
        if(x != '/'){
            ++cnt;
            res += x;
        }
        else{
            if(cnt == 1){
                char tmp = res.back();
                res.pop_back();
                res = res + '0' + tmp;
            }
            res += x;
            cnt = 0;
        } 
    }
    return res;
}

struct SinhVien{
    string maSV = "N20DCCN001";
    string ten, lop, ngaySinh;
    float GPA;
};

void nhapThongTinSV(SinhVien &a){
    getline(cin, a.ten);
    cin >> a.lop >> a.ngaySinh >> a.GPA;
}

void inThongTinSV(SinhVien a){
    cout << a.maSV << ' ' << a.ten << ' ' << a.lop << ' ' << chuanhoa(a.ngaySinh) << ' ' << setprecision(2) << fixed << a.GPA;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}