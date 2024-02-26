#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct ToaDo{
    int x, y, z;
    void nhap(){
        cin >> x >> y >> z;
    }
};

ToaDo dt(ToaDo A, ToaDo B){
    ToaDo res;
    res.x = B.x - A.x;
    res.y = B.y - A.y;
    res.z = B.z - A.z;
    return res;
}

ToaDo tichCoHuong(ToaDo A, ToaDo B){
    ToaDo res;
    res.x = A.y*B.z - A.z*B.y;
    res.y = A.z*B.x - A.x*B.z;
    res.z = A.x*B.y - A.y*B.x;
    return res; 
}

int tichVoHuong(ToaDo A, ToaDo B){
    return A.x*B.x + A.y*B.y + A.z*B.z;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ToaDo a[4];
        for(auto &x : a) x.nhap();
        ToaDo AB = dt(a[0], a[1]), AC = dt(a[0], a[2]), AD = dt(a[0], a[3]);
        ToaDo tmp = tichCoHuong(AB, AC);
        int check = tichVoHuong(tmp, AD);
        if(!check) cout << "YES\n";
        else cout << "NO\n";
    }
}
