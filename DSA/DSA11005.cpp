#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Node{
    int val;
    Node *left, *right;

    Node(int val){
        this -> val = val;
        this -> left = this -> right = NULL;
    }
};

void postOrder(Node* &root){
    if(!root) return;
    postOrder(root -> left);
    postOrder(root -> right);
    cout << root -> val << ' ';
}

Node* buildTree(int n, int *in, int *lv){
    Node* root = new Node(lv[0]);
    queue<tuple<Node*, int, int>> q;
    q.push(make_tuple(root, 0, n - 1));
    int pos = 1;
    while(!q.empty()){
        tuple<Node*, int, int> tmp = q.front();
        q.pop();
        int idx;
        for(int i = get<1>(tmp); i <= get<2>(tmp); ++i){
            if(in[i] == get<0>(tmp) -> val){
                idx = i;
                break;
            }
        }
        if(idx - get<1>(tmp) >= 1){
            get<0>(tmp) -> left = new Node(lv[pos++]);
            q.push(make_tuple(get<0>(tmp) -> left, get<1>(tmp), idx - 1));
        }
        if(get<2>(tmp) - idx >= 1){
            get<0>(tmp) -> right = new Node(lv[pos++]);
            q.push(make_tuple(get<0>(tmp) -> right, idx + 1, get<2>(tmp)));
        }
    }
    return root;
}

void solve(){
    int n;
    cin >> n;
    int in[n], lv[n];
    for(int &x : in) cin >> x;
    for(int &x : lv) cin >> x;
    Node* root = buildTree(n, in, lv);
    postOrder(root);
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