#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void judge(){
    //fastio;
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif
}
class node{
    public:
        int data;
        node*left;
        node*right;

        node(int d){
            data = d;
            left=NULL;
            right=NULL;
        }
};

node* buildtree(){
    int d;
    cin>>d;

    if(d==-1)
        return NULL;

    node* n = new node(d);
    n->left = buildtree();
    n->right = buildtree();

    return n;
}


ll replacewithsum(node* root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return 0;
    }

    ll temp = root->data;
    
    ll root->data = replacewithsum(root->left) + replacewithsum(root->right);

    return root->data + temp;
}

int main(){
    judge();
    node* n ;
    n = buildtree();

    ll ans = replacewithsum(n);
    return 0;
}