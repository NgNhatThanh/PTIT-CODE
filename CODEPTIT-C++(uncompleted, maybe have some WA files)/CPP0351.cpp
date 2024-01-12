#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n;
        cin.ignore();
        getline(cin, s);
        vector<string> res;
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            for(char &x : tmp) x = tolower(x);
            tmp[0] = toupper(tmp[0]);
            res.push_back(tmp);
        }
        if(n == 1){
            cout << res.back() << ' ';
            for(int i=0; i<res.size()-1; ++i) cout << res[i] << ' ';
        }
        else{
            for(int i=1; i<res.size(); ++i) cout << res[i] << ' ';
            cout << res[0];
        }
        cout << '\n';
    }
}   