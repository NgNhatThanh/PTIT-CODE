#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Dien tich da giac loi la S = 1/2 * abs((x1*y2 - y1*x2) + (x2*y3 - y2*3) + ... + (xn*y1 - yn*x1))

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        pair<int, int> a[n];
        for(auto &x : a) cin >> x.first >> x.second;
        int s1 = a[n-1].first * a[0].second, s2 = a[n-1].second * a[0].first; 
        for(int i=0; i<n-1; ++i){
            s1 += a[i].first * a[i+1].second;   
            s2 += a[i].second * a[i+1].first;
        }
        double res = abs(s1-s2)/2.0;
        cout << setprecision(3) << fixed << res << '\n';    
    }
}