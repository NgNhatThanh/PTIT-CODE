#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node *left, *right;

    Node(int val){
        this -> val = val;
        left = right = NULL;
    }
};

int Find(int val, int l, int r, int *in){
    for(int i = l; i <= r; ++i){
        if(in[i] == val) return i;
    }
    return -1;
}

Node* build(int l, int r, int *in, int *pre, int &id){
    Node *res = NULL;
    if(l <= r){
        res = new Node(pre[id]);
        int val = pre[id];
        int idx = Find(val, l, r, in);
        ++id;
        res -> left = build(l, idx - 1, in, pre, id);
        res -> right = build(idx + 1, r, in, pre, id);
    }
    return res; 
}

void lrn(Node* root){
    if(root -> left) lrn(root -> left);
    if(root -> right) lrn(root -> right);
    cout << root -> val << ' ';
}

void solve(){
    int n;
    cin >> n;
    int pre[n], in[n];
    for(int &x : in) cin >> x;
    for(int &x : pre) cin >> x;
    int idx = 0;
    Node *root = build(0, n - 1, in, pre, idx);
    lrn(root);
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}