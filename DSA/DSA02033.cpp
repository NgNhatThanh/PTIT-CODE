#include <bits/stdc++.h>
using namespace std;

int n;
string perm = "";

int check(){
    for(int i = 1; i < perm.size(); ++i){
        if(abs(perm[i] - perm[i - 1]) == 1) return 0;
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; ++i) perm += char(i + '1');
        do{
            if(check()) cout << perm << '\n';
        }
        while(next_permutation(begin(perm), end(perm)));
        perm = "";
    }
}