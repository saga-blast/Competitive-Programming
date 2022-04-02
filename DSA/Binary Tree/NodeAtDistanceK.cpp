#include<iostream>
#include <bits/stdc++.h>
#define ll long long int
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

void printatlevelK(node* root,ll k){
    if(root==NULL)
        return ;
    
    if(k==0){
        cout<<root->data<<" ";
        return;
    }
    printatlevelK(root->left,k-1);
    printatlevelK(root->right,k-1);

    return;
}

ll printnodeatdistanceK(node* root,node* target, ll k){
     
    if(root==NULL){
        return -1;
    }

    if(root==target){
        printatlevelK(target,k);
        return 0;
    }

    int dl = printnodeatdistanceK(root->left,target,k);
    if(dl!=-1){
        if(dl+1==k){
            cout<<root->data<<" ";
        }
        else{
            printatlevelK(root->right,k-2-dl);
        }
        return 1+dl;
    }
    int dr = printnodeatdistanceK(root->right,target,k);
    if(dr!=-1){
        if(dr+1==k){
            cout<<root->data<<" ";
        }
        else{
            printatlevelK(root->left,k-2-dr);
        }
        return 1+dr;
    }
    return -1;
}

int main(){
    //judge();
    node* n ;
    n= new node(1);
    n->left = new node(2);
    n->right = new node(3);
    n->left->left = new node(4);
    n->left->right = new node(5);
    n->right->right = new node(6);
    n->left->right->left = new node(7);
    n->left->right->right = new node(8);
    n->left->right->right->left = new node(9);
    n->left->right->right->right = new node(10);

    node* target = n->left->right;
    ll k=2;

    printnodeatdistanceK(n,target,k);
    return 0;
}