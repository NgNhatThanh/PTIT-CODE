#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = 2;
        stack<int> st;
        st.push(1);
        for(char x : s){
            if(x == 'I'){
                while(st.size()){
                    cout << st.top();
                    st.pop();
                }
            }
            st.push(n++);
        }
        while(st.size()){
            cout << st.top();
            st.pop();
        }
        cout << '\n';
    }
}
