#include <bits/stdc++.h>
#define ll long long
using namespace std;

string check(int a[], int l, int r){
    int id=l;
    for(int i=l; i<r; ++i){
        if(a[i] > a[i+1]){
            id = i;
            break;
        }
    }
    for(int i=id; i<r; ++i){
        if(a[i] < a[i+1]) return "No";
    }
    return "Yes";
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        int l, r;
        cin >> l >> r;
        cout << check(a, l, r) << '\n';
    }
}