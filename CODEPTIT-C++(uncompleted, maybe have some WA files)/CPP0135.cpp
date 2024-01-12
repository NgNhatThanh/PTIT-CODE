#include <bits/stdc++.h>
using namespace std;
#define ll long long

int check(int n){
    for(int i=2; i<=sqrt(n); ++i){
        if(n%i==0) return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for(int i=2; i<=sqrt(n); ++i){
            if(check(i)) cout << i*i << ' ';
        }
        cout << '\n';   
    }
}