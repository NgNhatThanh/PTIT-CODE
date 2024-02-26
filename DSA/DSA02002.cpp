#include <bits/stdc++.h>
using namespace std;

void print(int a[], int size){
    if(size > 1){
        int b[size - 1];
        for(int i = 0; i < size; ++i) b[i] = a[i] + a[i + 1];
        print(b, size - 1);
    }
    cout << '[';
    for(int i = 0; i < size; ++i){
        cout << a[i];
        if(i < size - 1) cout << ' ';
    } 
    cout << "] ";
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
        cout << '\n';
    }
}