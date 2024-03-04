#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, x;
    cin >> n;
    string s;
    deque<int> q;
    while(n--){
        cin >> s;
        if(s == "PUSHFRONT"){
            cin >> x;
            q.push_front(x);
        }
        else if(s == "PUSHBACK"){
            cin >> x;
            q.push_back(x);
        }
        else if(s == "POPFRONT"){
            if(!q.empty()) q.pop_front();
        }
        else if(s == "POPBACK"){
            if(!q.empty()) q.pop_back();
        }
        else if(s == "PRINTBACK"){
            if(!q.empty()) cout << q.back() << '\n';
            else cout << "NONE\n";
        }
        else{
            if(!q.empty()) cout << q.front() << '\n';
            else cout << "NONE\n";
        }
    }
}

int main(){
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}