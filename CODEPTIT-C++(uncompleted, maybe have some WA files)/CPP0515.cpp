#include <bits/stdc++.h>
#define ll long long
using namespace std;

int id = 1;

void chuanHoa(string &s){
    stringstream ss(s);
    string tmp;
    s = "";
    while(ss >> tmp){
        for(char &x : tmp) x = tolower(x);
        tmp[0] -= 32;
        s += tmp + " ";
    }
}

struct SinhVien{
    string ten, lop, date, msv = "B20DCCN";
    float gpa;
    void nhap(){
        cin.ignore();
        getline(cin, ten);
        chuanHoa(ten);
        cin >> lop >> date >> gpa;
        if(date[2] != '/') date = "0" + date;
        if(date[5] != '/') date.insert(begin(date) + 3, '0');
        string ma = to_string(id++);
        while(ma.size() < 3) ma = "0" + ma;
        msv += ma;
    }
    void in(){
        cout << msv << ' ' << ten << lop << ' ' << date << ' ' << setprecision(2) << fixed << gpa << '\n';
    }
};

void nhap(SinhVien a[], int n){
    for(int i=0; i<n; ++i) a[i].nhap();
}

int cmp(SinhVien a, SinhVien b){
    return a.gpa > b.gpa;
}

void sapxep(SinhVien a[], int n){
    sort(a, a+n, cmp);
}

void in(SinhVien a[], int n){
    for(int i=0; i<n; ++i) a[i].in();
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}