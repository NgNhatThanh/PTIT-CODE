#include <bits/stdc++.h>
using namespace std;
/*
st : start
tg : trung gian
des : destination
*/
int vitri[25];
queue<string> kq;

char ten(int a){
    if(a==0) return 'A';
    if(a==1) return 'B';
    return 'C';
}

// se co truong hop tg khong nam trong 0 1 2 nhung khi do chac chan st==des nen khong sao
void chuyen(int n, int st , int tg ,int des){
    if(!n) return;
    if(n==1){
        if(vitri[1]!=des){
            string tmp="";
            tmp=tmp+ten(vitri[1])+ten(des);
            kq.push(tmp);
        }
        vitri[n] = des;
        return;
    }
    // neu dia n dang o vi tri dung roi thi khong can chuyen n-1 dia ra coc trung gian nua
    if(vitri[n]!=des) chuyen(n-1, vitri[n-1], 3-vitri[n-1]-tg, tg);
    if(vitri[n]!=des){
        string tmp="";
        tmp=tmp+ten(vitri[n])+ten(des);
        kq.push(tmp);
        vitri[n]=des;
    }
    chuyen(n-1, vitri[n-1], 3-vitri[n-1]-des, des);
}

void hanoi(int n){
    if(!n) return;
    if(vitri[n]!=2) chuyen(n, vitri[n], 1-vitri[n], 2);
    hanoi(n-1);
}

int main() 
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int len = s.size();
    for(int i=1; i<=len; ++i){
      vitri[i] = s[i-1]-'A';
    }
    hanoi(n);
    cout << kq.size() <<'\n';
    while(kq.size()){
      cout << kq.front() << '\n';
      kq.pop();
    }
}
