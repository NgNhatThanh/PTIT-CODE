#include <bits/stdc++.h>
using namespace std;

string date = "--/--/2---";

int check(){
    int month = (date[3] - '0') * 10 + date[4] - '0';
    return month <= 12;
}

void solve(int i, char prev){
    if(i == 10){
        if(check()) cout << date << '\n';
        return;
    }
    if(date[i] == '/' || i == 6){
        solve(i + 1, '.');
        return;
    }
    for(int j = 0; j < 3; j += 2){
        if(!j && prev == '0'){
            if(i < 6) continue;
            date[i] = '0';
            solve(i + 1, '0');
        }
        else{
            date[i] = char(j + '0');
            solve(i + 1, date[i]); 
        }
    }
}

int main(){
    solve(0, '.');
}   