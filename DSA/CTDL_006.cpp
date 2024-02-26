#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next = NULL;
    Node(int x){
        val = x;
        next = NULL;
    }
};

Node* first;

void add(int val){
    if(!first) first = new Node(val);
    else{
        Node* tmp = first;
        while(tmp->next) tmp = tmp->next;
        tmp->next = new Node(val);
    }
}

int check(int x){
    Node* tmp = first;
    while(tmp){
        if(tmp->val == x) return 0;
        tmp = tmp->next;
    }
    return 1;
}

void process(){
    Node* tmp = first;
    first = NULL;
    while(tmp){
        if(check(tmp->val)) add(tmp->val);
        tmp = tmp->next;
    }
}

void print(){
    while(first){
        cout << first->val << ' ';
        first = first->next;
    }
}

int main(){
    int n, x;
    cin >> n;
    while(n--){
        cin >> x;
        add(x);
    }
    process();
    print();
}