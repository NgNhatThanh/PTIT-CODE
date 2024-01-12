#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int res = 0;
        for(int i=0; i<s.size(); ++i){
            if(isdigit(s[i])){
                int tmp = 0;
                int k =  i;
                while(k<s.size() && isdigit(s[k])){
                    tmp = tmp*10 + s[k++] - '0';
                }
                res = max(res, tmp);
                i = k;
            }
        }
        cout << res << '\n';
    }
}   