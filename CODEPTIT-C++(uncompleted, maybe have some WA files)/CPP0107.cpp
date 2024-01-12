#include <bits/stdc++.h>
#define ll long long
using namespace std;

char m1[] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
char m2[] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};

int main()
{
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    double score = 10.00, sai = 1.0*10/15;
    char x;
    if(n == 101){
      for(int i=0; i<15; ++i){
        cin >> x;
        if(x != m1[i]) score -= sai;
      }
    }
    else{
      for(int i=0; i<15; ++i){
        cin >> x;
        if(x != m2[i]) score -= sai;
      }
    }
    cout << setprecision(2) << fixed << score << '\n';
  }
} 