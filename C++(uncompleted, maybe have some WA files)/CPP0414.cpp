#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int b[10] = {};
        int x;
        while(n--){
            cin >> x;
            while(x){
                ++b[x%10];
                x /= 10;
            }
        }
        for(int i=0; i<10; ++i){
            if(b[i]) cout << i << ' ';
        }
        cout << '\n';
    }
}   