#include <bits/stdc++.h>
#define ll long long
using namespace std;

int fibo[1005];

void init(){
    fibo[0] = fibo[1] = fibo[2] = 1;
    int x = 1, y = 2;
    while(x + y <= 1000){
        fibo[x + y] = 1;
        int tmp = x;
        x = y;
        y = tmp + y;
    }
}

int main()
{
    init();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int &x : a){
            cin >> x;
            if(fibo[x]) cout << x << ' ';
        }
        cout << '\n';
    }
}