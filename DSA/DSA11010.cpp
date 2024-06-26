#include <bits/stdc++.h>
using namespace std;

int u, v, maxDepth;
char x;

struct Node{
    int val;
    Node *left, *right;
    Node(int valu){
        val = valu;
        left = right = NULL;
    }
};

void insertNode(Node* &root){
    if(!root) root = new Node(u);
    if(root -> val == u){
        if(x == 'L') root -> left = new Node(v);
        else root -> right = new Node(v);
    }
    else{
        if(root -> left) insertNode(root -> left);
        if(root -> right) insertNode(root -> right);
    }
}

bool isPerfect(Node* &root, int depth = 0){
    if(!root -> left && !root -> right){
        if(maxDepth > 0 && depth != maxDepth) return false;
        maxDepth = max(depth, maxDepth);
        return true;
    }
    if(!root -> left ^ !root -> right) return false;
    if(root -> left) return isPerfect(root -> left, depth + 1) && isPerfect(root -> right, depth + 1);
    return true;
}

void solve(){
    int n;
    cin >> n;
    Node* root = NULL;
    while(n--){
        cin >> u >> v >> x;
        insertNode(root);
    }
    (isPerfect(root)) ? cout << "Yes\n" : cout << "No\n";
    maxDepth = 0;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    
}