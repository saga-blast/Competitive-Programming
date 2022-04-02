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

void transverseTree(node* root ,ll d, map<ll, vector<ll>> &m){

    if(root==NULL)
        return ;

    m[d].push_back(root->data);
    transverseTree(root->left,d-1,m);
    transverseTree(root->right,d+1,m); 

}
void verticalOrderPrint(node* root){
    map<ll,vector<ll>> m ;

    ll d=0;

    transverseTree(root,d,m);

    for(auto i:m){
        ll key = i.first;
        vector<ll> v = i.second;

        for(auto j:v){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}


int main(){
    // judge();
    node* n ;
    n= new node(1);
    n->left = new node(2);
    n->right = new node(3);
    n->left->left = new node(4);
    n->left->right = new node(5);
    n->right->left = new node(6);
    n->right->right = new node(7);
    n->right->left->right = new node(8);
    n->right->right->right = new node(9);
    
    verticalOrderPrint(n);
    
    return 0;
}