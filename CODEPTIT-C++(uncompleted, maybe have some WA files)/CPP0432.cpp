#include <bits/stdc++.h>
using namespace std;

int cmp(string a, string b){
    string t1 = a + b, t2 = b + a;
    return t1 > t2;
}

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string a[n];
        for(string &x : a) cin >> x;
        sort(a, a+n, cmp);
        for(string x : a) cout << x;
        cout << '\n'; 
    }
}