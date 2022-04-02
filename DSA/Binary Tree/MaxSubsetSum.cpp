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

pair<ll , ll> maxsubsetsum(node* root){
    if(root==NULL){
        return make_pair(0,0);
    }

    pair<ll,ll> p,left,right;
    left = maxsubsetsum(root->left);
    right = maxsubsetsum(root->right);

    p.first = root->data + left.second + right.second;
    p.second = max(left.first,left.second) + max(right.first , right.second);

    return p;
}

int main(){
    judge();
    node* n ;
    n = buildtree();

    printlevelorder(n);

    pair<ll,ll> ans = maxsubsetsum(n);
    cout<<endl<<"MAX SUM : "<<max(ans.first,ans.second);
    return 0;
}