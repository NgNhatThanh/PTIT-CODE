#include <bits/stdc++.h>
using namespace std;

int check(int n){
    int cnt = 0;
    map<int, int> mp;
    for(int i=2; i<=sqrt(n); ++i){
        if(n%i==0){
            ++cnt;
            n /= i;
            if(n%i==0) return 0;
        }
    }
    cnt += (n>1);
    return (cnt == 3);
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    cout << check(n) << '\n';
  }
}