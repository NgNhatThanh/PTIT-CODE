#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int dpa[n+5] = {}, dpb[n+5] = {};
    // dpa[i] la so buoc it nhat de bien doi day tu 0->i-1 thanh day A
    for(int i=1; i<=n; ++i){
        if(s[i-1] == 'A'){
            dpa[i] = min(dpa[i-1], dpb[i-1] + 1);
            dpb[i] = min(dpb[i-1] + 1, dpa[i-1] + 1); 
        }
        else{
            dpa[i] = min(dpa[i-1] + 1, dpb[i-1] + 1);
            dpb[i] = min(dpa[i-1] + 1, dpb[i-1]);
        }
    }
    cout << dpa[n];
} 