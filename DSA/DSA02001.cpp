#include <bits/stdc++.h>
using namespace std;

void print(int a[], int size){
    cout << '[';
    for(int i = 0; i < size; ++i){
        cout << a[i];
        a[i] += a[i + 1];
        if(i < size - 1) cout << ' ';
    } 
    cout << "]\n";
    if(size > 1) print(a, size - 1);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        print(a, n);
    }
}