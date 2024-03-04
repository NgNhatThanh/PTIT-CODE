#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, x;
    cin >> n;
    deque<int> q;
    while(n--){
        cin >> x;
        switch(x){
            case 1:
                cout << q.size() << '\n';
                break;
            case 2:
                (q.empty()) ? cout << "YES\n" : cout << "NO\n";
                break;
            case 3:
                cin >> x; q.push_back(x);
                break;
            case 4:
                if(!q.empty()) q.pop_front();
                break;
            case 5:
                (q.empty()) ? cout << "-1\n" : cout << q.front() << '\n';
                break;
            case 6: (q.empty()) ? cout << "-1\n" : cout << q.back() << '\n';
        }
    }
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}