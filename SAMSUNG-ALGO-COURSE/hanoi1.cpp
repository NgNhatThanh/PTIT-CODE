#include <iostream>
#include <cmath>
using namespace std;

int n;
int res = 0;
/*
st : start
tg : trung gian
des : destination
*/
void hanoi(int n, char st, char tg, char des){
    if(n == 2 ){
      cout << st << des << '\n';
      cout << st << des << '\n';
      return;
    }
    hanoi(n-2, st ,des , tg);
    hanoi(2, st ,tg, des);
    hanoi(n-2, tg , st ,des);
}

int main() 
{
    cin >> n;
    long long cnt = 2*(pow(2, n/2)-1);
    cout << cnt << '\n';
    hanoi(n, 'A', 'B', 'C');
}
