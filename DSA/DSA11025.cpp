#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node *left, *right;
    Node(int valu){
        val = valu;
        left = right = NULL;
    }
};

void createTree(Node* &root, int l, int r, int *a){
    if(l > r) return;
    int mid = (l + r) / 2;
    if(!root) root = new Node(a[mid]);
    else{
        if(root -> val >= a[mid]) root -> left = new Node(a[mid]);
        else root -> right = new Node(a[mid]);
    }
    createTree(root -> left, l, mid - 1, a);
    createTree(root -> right, mid + 1, r, a);
}

void preOrder(Node* root){
    cout << root -> val << ' ';
    if(root -> left) preOrder(root -> left);
    if(root -> right) preOrder(root -> right);
}

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    sort(a, a + n);
    Node* root = NULL;
    createTree(root, 0, n - 1, a);
    preOrder(root);
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