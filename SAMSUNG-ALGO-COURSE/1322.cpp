#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        priority_queue< ll, vector<ll>, greater<ll> > pq;
        for(int &x : a){
            cin >> x;
            pq.push(x);
        }
        ll  res = 0;
        while( pq.size() > 1 ){
            int t1 = pq.top();
            pq.pop();
            int t2 = pq.top();
            pq.pop();
            pq.push(t1 + t2);
            res += t1 + t2;
        }
        cout << res << '\n';
    }
}