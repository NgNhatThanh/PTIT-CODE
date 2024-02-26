#include <bits/stdc++.h>
using namespace std;

void interchange_sort(int a[], int n){
    int cnt = 1;
    for(int i = 0; i < n - 1; ++i){
        for(int j = i + 1; j < n; ++j){
            if(a[j] < a[i]) swap(a[i], a[j]);
        }
        cout << "Buoc " << cnt++ << ": ";
        for(int j = 0; j < n; ++j) cout << a[j] << ' '; 
        cout << '\n';
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    interchange_sort(a, n);
}