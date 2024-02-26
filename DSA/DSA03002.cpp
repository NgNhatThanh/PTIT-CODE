#include <bits/stdc++.h>
using namespace std;

int mi(int n){
    string s = to_string(n);
    for(char &x : s){
        if(x == '6') x = '5';
    }
    return stoi(s);
}  

int ma(int n){
    string s = to_string(n);
    for(char &x : s){
        if(x == '5') x = '6';
    }
    return stoi(s);
} 

int main(){
    int a, b;
    cin >> a >> b;
    cout << mi(a) + mi(b) << ' ' << ma(a) + ma(b);
}