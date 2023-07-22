#include <iostream>
using namespace std;
/*
st : start
tg : trung gian
des : destination
*/
void hanoi(int n, char st, char tg, char des){
    if(n==1){
        cout << st;
        if(des - 'A' != (st - 'A' + 1)%3) cout << tg;
    }
    else{
        if(des - 'A' != (st - 'A' + 1)%3){// chuyen mot nhom sang hai coc khong lien ke
          hanoi(n-1, st , tg, des);
          hanoi(1, st, des, tg);
          hanoi(n-1, des, tg, st);
          hanoi(1, tg , st, des);
          hanoi(n-1, st, tg, des);
        }
        else{// chuyen mot nhom sang hai coc lien ke
          hanoi(n-1, st ,des ,tg);
          hanoi(1, st , tg ,des);
          hanoi(n-1, tg, st , des);
        }
    }
}

int main() 
{
    int n;
    cin >> n;
    hanoi(n, 'A', 'B', 'C');
}
