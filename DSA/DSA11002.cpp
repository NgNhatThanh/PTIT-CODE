#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> v;

struct Node{
    string val;
    Node *left, *right;
    Node(){}
    Node(string val){
        this -> val = val;
        left = right = NULL;
    }


};

int cal(char x, int t1, int t2){
    switch(x){
        case '+': return t1 + t2;
        case '-': return t1 - t2;
        case '*': return t1 * t2;
        case '/': return t1 / t2;
    }
}

void insert(Node* &root, int i){
    root = new Node(v[i]);
    if(2 * i + 1 < n){
        insert(root -> left, 2 * i + 1);
        insert(root -> right, 2 * i + 2);
    }
}

void lrn(Node* &root){
    if(root -> left){
        lrn(root -> left);
        lrn(root -> right);
        int res = cal(root -> val[0], stoi(root -> left -> val), stoi(root -> right -> val));
        root -> val = to_string(res);
    }
}

void solve(){
    cin >> n;
    v.resize(n);
    for(string &x : v) cin >> x;
    Node *root;
    insert(root, 0);
    lrn(root);
    cout << root -> val << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}