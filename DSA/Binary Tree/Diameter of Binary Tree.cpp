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

ll height(node* n){
    node* root = n;

    if(root==NULL)
        return 0;

    ll h1= height(root->left);
    ll h2= height(root->right);

    return 1+max(h1,h2);
}

ll diameter(node* root){
    if(root==NULL)
        return 0;

    ll d1 = height(root->left) + height(root->right);
    ll d2 = diameter(root->left);
    ll d3 = diameter(root->right);

    return max(d1,d2,d3);
}

class HDPair{
    public:
        ll height;
        ll diamter;
};

HDPair optDiameter(node* root){
    HDPair p;

    if(root==NULL){
        p.height = p.diamter = 0;
        return p;
    }

    HDPair left = optDiameter(root->left);
    HDPair right = optDiameter(root->right);

    p.height = max(left.height , right.height) +1;

    int d1 = left.height + right.height;
    ll d2 = left.diamter;
    ll d3 = right.diameter;

    p.diamter = max({d1,d2,d3});

}

int main(){
    judge();
    node* n ;
    n = buildtree();

    printlevelorder(n);

    ll dia = diameter(n); //0(n*hight)
    HDPair optdia = optDiameter(n); //o(n)
    return 0;
}