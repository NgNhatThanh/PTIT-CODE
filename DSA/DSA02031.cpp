#include <bits/stdc++.h>
using namespace std;

char a;
vector<string> ans;
string alp = "";

int check(){
    for(int i = 0; i < alp.size(); ++i){
        if(alp[i] == 'A' || alp[i] == 'E'){
            if(i > 0 && i < alp.size() - 1){
                if(alp[i - 1] != 'A' && alp[i - 1] != 'E'
                 && alp[i + 1] != 'A' && alp[i + 1] != 'E') return 0;
            }
        }
    }
    return 1;
}

int main(){
    cin >> a;
    for(int i = 0; i <= (a - 'A'); ++i) alp += char(i + 'A');
    do{
        if(check()) ans.push_back(alp);
    }
    while(next_permutation(begin(alp), end(alp)));
    sort(begin(ans), end(ans));
    for(string x : ans) cout << x << '\n';
}