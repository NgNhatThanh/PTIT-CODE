#include <bits/stdc++.h>
using namespace std;

int p[15];
int n, k, ok = 1;

void sinh(){
    int i = k - 1;
    while(i >= 0 && p[i] == n - k + i + 1) --i;
    if(i >= 0){
        ++p[i];
        for(++i; i < k; ++i) p[i] = p[i - 1] + 1;
    }
    else ok = 0;
}

int main(){
    cin >> n >> k;
    for(int i = 0; i < k; ++i) p[i] = i + 1;
    string a[n];
    set<string> se;
    string tmp;
    while(n--){
        cin >> tmp;
        se.insert(tmp);
    }
    int idx = 0;
    for(string x : se) a[idx++] = x;
    n = se.size(); 
    while(ok){
        for(int i = 0; i < k; ++i) cout << a[p[i] - 1] << ' ';
        cout << '\n';
        sinh();
    }
}