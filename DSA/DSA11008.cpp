#include <bits/stdc++.h>
#define ll long long
using namespace std;

int ok = 1, cur;

struct Node{
    int val;
    Node *left, *right;

    Node(int val){
        this -> val = val;
        this -> left = this -> right = NULL;
    }
};

void addNode(Node* &root, int x, int y, char p){
    if(root -> val == x){
        if(p == 'L') root -> left = new Node(y);
        else root -> right = new Node(y);
    }
    else{
        if(root -> left) addNode(root -> left, x, y, p);
        if(root -> right) addNode(root -> right, x, y, p);
    }
}

void duyet(Node* root, int lv){
    if(!ok) return;
    if(!root -> left && !root -> right){
        if(!cur) cur = lv;
        else if(lv != cur) ok = 0;
        return;
    }
    if(root -> left) duyet(root -> left, lv + 1);
    if(root -> right) duyet(root -> right, lv + 1);
}

void solve(){
    int n, x, y;
    char p;
    cin >> n;
    Node *root = NULL;
    while(n--){
        cin >> x >> y >> p;
        if(!root) root = new Node(x);
        addNode(root, x, y, p);
    }
    duyet(root, 1);
    cout << ok << '\n';
    ok = 1; cur = 0;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}