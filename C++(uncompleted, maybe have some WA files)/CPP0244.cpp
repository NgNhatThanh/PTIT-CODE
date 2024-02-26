#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    set<int> s;
    for(int &x : a){
        cin >> x;
        s.insert(x);
    }
    for(int x : s) cout << x << ' ';
}