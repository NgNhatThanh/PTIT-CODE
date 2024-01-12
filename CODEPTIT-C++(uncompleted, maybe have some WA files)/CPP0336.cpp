#include <bits/stdc++.h>
#define ll long long
using namespace std;

int check(vector<int> &a, vector<int> &b){
    for(int i=0; i<26; ++i){
        if(b[i] && a[i] < b[i]) return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    string a, b;
    while(t--){
        cin >> a >> b;
        vector<int> B(26, 0);
        int n = a.size();
        string res = "-1";
        for(char x : b) ++B[x - 'a'];
        for(int i=0; i<n; ++i){
            for(int j=1; j<=n-i; ++j){
                string tmp = a.substr(i, j);
                vector<int> A(26, 0);
                for(char x : tmp) ++A[x - 'a'];
                if(check(A, B)){
                    //cout << tmp << '\n';
                    if(res == "-1" || res.size() > tmp.size() || (res.size() == tmp.size() && res < tmp)) res = tmp;
            }
        }
        cout << res << '\n';
    }
} 