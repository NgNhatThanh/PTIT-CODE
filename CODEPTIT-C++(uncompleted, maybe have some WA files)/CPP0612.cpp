#include <bits/stdc++.h>
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
    string ten, lop, msv = "B20DCCN", date;
    float gpa;
    friend istream &operator >> (istream &cin, SinhVien &a){
        cin.ignore();
        getline(cin, a.ten);
        chuanHoa(a.ten);
        cin >> a.lop >> a.date >> a.gpa;
        string ma = to_string(id++);
        while(ma.size() < 3) ma = "0" + ma;
        a.msv += ma;
        if(a.date[2] != '/') a.date = "0" + a.date;
        if(a.date[5] != '/') a.date.insert(begin(a.date)+3, '0');
        return cin;
    }
    friend ostream &operator << (ostream &cout, SinhVien a){
        cout << a.msv << ' ' << a.ten << a.lop << ' ' << a.date << ' ' << setprecision(2) << fixed << a.gpa << '\n';
        return cout;
    }
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}