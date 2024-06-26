#include <bits/stdc++.h>
using namespace std;

int u, v;
char x;

struct Node{
    int val;
    Node *left, *right;
    Node(int valu){
        val = valu;
        left = right = NULL;
    }
};

void insert(Node* &root, int u, int v, char x){
    if(root == NULL) root = new Node(u);
    if(root -> val == u){
        if(x == 'L') root -> left = new Node(v);
        else root -> right = new Node(v);
    }
    else{
        if(root -> left) insert(root -> left, u, v, x);
        if(root -> right) insert(root -> right, u, v, x);
    }
}

void solve(){
    int n;
    cin >> n;
    Node* root = NULL;
    while(n--){
        cin >> u >> v >> x;
        insert(root, u, v, x);
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* tmp = q.front();
        q.pop();
        cout << tmp -> val << ' ';
        if(tmp -> left) q.push(tmp -> left);
        if(tmp -> right) q.push(tmp -> right);
    }
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