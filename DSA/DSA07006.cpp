#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

// Dùng set thì AC mà dùng vector rồi sort thì WA ._.
void solve(){
    string s;
    cin >> s;
    stack<int> st;
    vector<pair<int, int>> pairs;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == '(') st.push(i);
        else if(s[i] == ')'){
            pairs.push_back({st.top(), i});
            st.pop();
        }
    }
    set<string> res;
    int n = pairs.size();
    for(int i = 1; i < (1 << n); ++i){
        map<int, int> idx;
        for(int j = 0; j < n; ++j){
            if(i & (1 << j)) idx[pairs[j].first] = idx[pairs[j].second] = 1;
        }

        string ans = "";
        for(int j = 0; j < s.size(); ++j){
            if(!idx[j]) ans += s[j];
        }
        res.insert(ans);
    }
    for(string x : res) cout << x << '\n';
}

int main(){
    faster()
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}