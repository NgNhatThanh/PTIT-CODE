#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct DaThuc{
    vector<int> soMu;
    vector<int> heSo;
    void nhap(string s){
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            if(tmp != "+"){
                int k = 0;
                for(int i = 0; i < tmp.size(); ++i){
                    if(isdigit(tmp[i])) k = k * 10 + tmp[i] - '0';
                    else{
                        heSo.push_back(k);
                        k = 0;
                        i += 2;
                    }
                }
                soMu.push_back(k);
            }
        }
    }
};

struct Node{
    int heSo, soMu;
    Node* next;
    Node(int hs, int sm){
        heSo = hs; soMu = sm;
        next = NULL;
    }
};

Node* root;
Node* lastNode;

void addNode(int hs, int sm){
    Node* tmp = new Node(hs, sm);
    if(!root) root = lastNode = tmp;
    else{
        Node* k = lastNode;
        k->next = tmp;
        lastNode = tmp;
    }
}

void congDaThuc(DaThuc A, DaThuc B){
    int i = 0, j = 0;
    while(i < A.heSo.size() && j < B.heSo.size()){
        if(A.soMu[i] > B.soMu[j]){
            addNode(A.heSo[i], A.soMu[i]);
            ++i;
        }
        else if(A.soMu[i] < B.soMu[j]){
            addNode(B.heSo[j], B.soMu[j]);
            ++j;
        }
        else{
            addNode(A.heSo[i] + B.heSo[j], A.soMu[i]);
            ++i; ++j;
        }
    }
    while(i < A.heSo.size()){
        addNode(A.soMu[i], A.soMu[i]); ++i;
    }
    while(j < B.heSo.size()){
        addNode(B.soMu[j], B.soMu[j]); ++j;
    }
}

void inDaThuc(){
    while(root){
        cout << root->heSo << "*x^" << root->soMu;
        root = root->next;
        if(root) cout << " + ";
    }
    cout << '\n';
}

void solve(){
    root = lastNode = NULL;
    string a, b;
    getline(cin, a);
    getline(cin, b);
    DaThuc A, B;
    A.nhap(a); B.nhap(b);
    congDaThuc(A, B);
    inDaThuc();
}

int main(){
    int t = 1;
    cin >> t;
    cin.ignore();
    while(t--){
        solve();
    }
}