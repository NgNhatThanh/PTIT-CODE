#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string chu = "";
        int so = 0;
        for(int i=0; i<s.size(); ++i){
            if(isalpha(s[i])) chu += s[i];
            else{
                so += s[i] - '0';
            }
        }
        sort(begin(chu), end(chu));
        cout << chu << so << '\n';
    }
}   