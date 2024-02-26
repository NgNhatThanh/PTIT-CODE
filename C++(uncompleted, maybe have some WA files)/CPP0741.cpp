#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll Pow(int x, int y, int p){
    if(!y) return 1;
    ll res = Pow(x, y/2, p);
    (res *= res) %= p;
    if(y%2) (res *= x) %= p;
    return res;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        int x, y, p;
        cin >> x >> y >> p;
        cout << Pow(x, y, p) << '\n';
    }
}