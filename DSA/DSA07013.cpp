#include <bits/stdc++.h>
#define ll long long
using namespace std;

int cal(int a, int b, char x){
    switch(x){
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
    }
}

void solve(){
    string s;
    cin >> s;
    stack<int> res;
    for(char x : s){
        if(isdigit(x)) res.push(x - '0');
        else{
            int t1 = res.top();
            res.pop();
            int t2 = res.top();
            res.pop();
            res.push(cal(t2, t1, x));
        }
    }
    cout << res.top() << '\n';
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}