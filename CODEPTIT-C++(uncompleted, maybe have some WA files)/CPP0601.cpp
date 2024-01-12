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

class SinhVien{
    string maSV = "B20DCCN001";
    string ten, lop, ngaySinh;
    float GPA;
    public:
        SinhVien(){
            ten  = lop = ngaySinh = "";
            GPA = 0;
        }
        void nhap(){
            getline(cin, ten);
            cin >> lop >> ngaySinh >> GPA;
        }
        void xuat(){
            cout << maSV << ' ' << ten << ' ' << lop << ' ' << chuanhoa(ngaySinh) << ' ' << setprecision(2) << fixed << GPA;
        }
};

int main()
{
    SinhVien a;
    a.nhap();
    a.xuat();
} 