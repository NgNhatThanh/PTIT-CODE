#include <bits/stdc++.h>
using namespace std;

int nt[10005];

void sang(){
    nt[1] = 1;
    for(int i=2; i<=10000; ++i){
        if(!nt[i]) {
            for(int j=i; j<=10000; j+=i){
                if(!nt[j]) nt[j] = i;
            }
        }
    }
}

int main(){
  sang();
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    for(int i=1; i<=n; ++i) cout << nt[i] << ' ';
    cout << '\n';
  }
}