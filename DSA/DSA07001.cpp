#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string s;
    vector<int> res;
    int x;
    while(cin >> s){
        if(s == "push"){
            cin >> x;
            res.push_back(x);
        }
        else if(s == "pop"){
            if(res.empty()) cout << "empty\n";
            else res.pop_back();
        }
        else{
            if(res.empty()) cout << "empty\n";
            else{
                for(int x : res) cout << x << ' ';
                cout << '\n';
            }
        }
    }
}