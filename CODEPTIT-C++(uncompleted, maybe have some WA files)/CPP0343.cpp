#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        int chan = 0, le = 0, cnt = 0;
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            int last = tmp.back() - '0';
            if(last&1) ++le;
            else ++chan;
            ++cnt;
        }
        if((cnt&1 && le>chan) || (cnt%2==0 && chan>le)) cout << "YES\n";
        else cout << "NO\n";
    }
}