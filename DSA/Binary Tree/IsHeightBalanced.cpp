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

pair<ll,bool> isHeightBalanced(node* root){
    pair<ll,bool> p,left,right;

    if(root==NULL){
        return make_pair(0,true);
    }

    left = isHeightBalanced(root->left);
    right = isHeightBalanced(rot->right);

    ll height = max(left.first,right.first) +1 ;

    if(abs(left.first - right.first)<=1 && left.second && right.second){
        return make_pair(height,true);
    }
    return make_pair(height,false);
}

int main(){
    judge();
    node* n ;
    n = buildtree();

    pair<int,bool> ans = isHeightBalanced(n);
    if(ans.second){
        cout<<"HEIGHT IS BALANCED";
    }
    return 0;
}