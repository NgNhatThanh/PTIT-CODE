#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string s;
    vector<int> res;
    int x;
    int q;
    cin >> q;
    while(q--){
        cin >> s;
        if(s == "PUSH"){
            cin >> x;
            res.push_back(x);
        }
        else if(s == "POP"){
            if(!res.empty()) res.pop_back();
        }
        else{
            if(res.empty()) cout << "NONE\n";
            else cout << res.back() << '\n';
        }
    }   
}