#include <bits/stdc++.h>
using namespace std;

struct ThiSinh{
    string ten, date;
    double d1, d2, d3, sum;
};

void nhap(ThiSinh &a){
    getline(cin, a.ten);
    cin >> a.date >> a.d1 >> a.d2 >> a.d3;
    a.sum = a.d1 + a.d2 + a.d3;
}

void in(ThiSinh a){
    cout << a.ten << ' ' << a.date << ' ' << setprecision(1) << fixed << a.sum;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
