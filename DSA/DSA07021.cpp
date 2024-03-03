#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    cin >> s;
    stack<int> res;
    stack<char> st;
    int ans = 0;
    for(char x : s){
        if(x == '('){
            st.push(x);
            res.push(1);    
        }
        else{
            if(!st.empty() && st.top() == '('){
                int tmp = 1;
                int cnt = 0;
                while(!res.empty() && res.top() > 0){
                    if(cnt > 1) break;
                    tmp += res.top();
                    if(res.top() & 1) ++cnt;
                    res.pop();
                }
                ans = max(ans, tmp - tmp % 2);
                res.push(tmp);
                st.pop();  
            }
            else res.push(0);
        }   
    }
    cout << ans << '\n';
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}