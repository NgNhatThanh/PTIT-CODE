#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Nguoi{   
    string ten, date;
    int ngay, thang, nam;
};

int cmp(Nguoi a, Nguoi b){
    if(a.nam == b.nam){
        if(a.thang == b.thang) return a.ngay < b.ngay;
        return a.thang < b.thang;
    }
    return a.nam < b.nam;
}

int main() {
	int n;
    cin >> n;
    Nguoi a[n];
    for(auto &x : a){
        cin >> x.ten >> x.date;
        int tmp = 0;
        int cnt = 0;
        for(char k : x.date){
            if(k == '/'){
                if(!cnt) x.ngay = tmp;
                else x.thang = tmp;
                tmp = 0;
                ++cnt;
            }
            else tmp = tmp*10 + k - '0';
        }
        x.nam = tmp;
    }
    sort(a, a+n, cmp);
    cout << a[n-1].ten << '\n' << a[0].ten;
}