#include <bits/stdc++.h>
using namespace std;
#define ll long long

int check(int n){
    if(n<2) return 0;
    for(int i=2; i<=sqrt(n); ++i){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
  int a, b;
  cin >> a >> b;
  if(a>b) swap(a, b);   
  for(int i=a+1; i<b; ++i){
    if(check(i)) cout << i << ' ';
  }
}