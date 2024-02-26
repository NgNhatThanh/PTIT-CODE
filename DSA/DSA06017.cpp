#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int m, int r){
    int i = l, j = m + 1;
    vector<int> res;
    while(i <= m && j <= r){
        if(a[i] <= a[j]) res.push_back(a[i++]);
        else res.push_back(a[j++]);
    }
    while(i <= m) res.push_back(a[i++]);
    while(j <= r) res.push_back(a[j++]);
    for(i = l; i <= r; ++i) a[i] = res[i - l];
}

void mergeSort(int a[], int l, int r){
    if(r - l + 1 == 1) return;
    int mid = (l + r) / 2;
    mergeSort(a, l, mid);
    mergeSort(a, mid + 1, r);
    merge(a, l, mid, r);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n + m];
        for(int &x : a) cin >> x;
        mergeSort(a, 0, n + m - 1);
        for(int x : a) cout << x << ' ';
        cout << '\n';
    }
}