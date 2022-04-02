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

// ll height(node* n){
//     node* root = n;

//     if(root==NULL)
//         return 0;

//     ll h1= height(root->left);
//     ll h2= height(root->right);

//     return 1+max(h1,h2);
// }

// ll diameter(node* root){
//     if(root==NULL)
//         return 0;

//     ll d1 = height(root->left) + height(root->right);
//     ll d2 = diameter(root->left);
//     ll d3 = diameter(root->right);

//     return max(d1,d2,d3);
// }

// class HDPair{
//     public:
//         ll height;
//         ll diameter;
// };

// HDPair optDiameter(node* root){
//     HDPair p;

//     if(root==NULL){
//         p.height = p.diameter = 0;
//         return p;
//     }

//     HDPair left = optDiameter(root->left);
//     HDPair right = optDiameter(root->right);

//     p.height = max(left.height , right.height) +1;

//     ll d1 = left.height + right.height;
//     ll d2 = left.diameter;
//     ll d3 = right.diameter;

//     p.diameter = max(d1,max(d2,d3));

//     return p;
// }

// ll replacewithsum(node* root){
//     if(root==NULL){
//         return 0;
//     }
//     if(root->left==NULL && root->right==NULL){
//         return 0;
//     }

//     ll temp = root->data;
//     root->data = replacewithsum(root->left) + replacewithsum(root->right);

//     return root->data + temp;
// }

// pair<ll,bool> isHeightBalanced(node* root){
//     pair<ll,bool> p,left,right;

//     if(root==NULL){
//         return make_pair(0,true);
//     }

//     left = isHeightBalanced(root->left);
//     right = isHeightBalanced(root->right);

//     ll height = max(left.first,right.first) +1 ;

//     if(abs(left.first - right.first)<=1 && left.second && right.second){
//         return make_pair(height,true);
//     }
//     return make_pair(height,false);
// }

// pair<ll , ll> maxsubsetsum(node* root){
//     if(root==NULL){
//         return make_pair(0,0);
//     }

//     pair<ll,ll> p,left,right;
//     left = maxsubsetsum(root->left);
//     right = maxsubsetsum(root->right);

//     p.first = root->data + left.second + right.second;
//     p.second = max(left.first,left.second) + max(right.first , right.second);

//     return p;
// }
// void printatlevelK(node* root,ll k){
//     if(root==NULL)
//         return ;
    
//     if(k==0){
//         cout<<root->data<<" ";
//         return;
//     }
//     printatlevelK(root->left,k-1);
//     printatlevelK(root->right,k-1);

//     return;
// }

// ll printnodeatdistanceK(node* root,node* target, ll k){
     
//     if(root==NULL){
//         return -1;
//     }

//     if(root==target){
//         printatlevelK(target,k);
//         return 0;
//     }

//     int dl = printnodeatdistanceK(root->left,target,k);
//     if(dl!=-1){
//         if(dl+1==k){
//             cout<<root->data<<" ";
//         }
//         else{
//             printatlevelK(root->right,k-2-dl);
//         }
//         return 1+dl;
//     }
//     int dr = printnodeatdistanceK(root->right,target,k);
//     if(dr!=-1){
//         if(dr+1==k){
//             cout<<root->data<<" ";
//         }
//         else{
//             printatlevelK(root->left,k-2-dr);
//         }
//         return 1+dr;
//     }
//     return -1;
// }

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
    // node* n ;
    // n = buildtree();

    // printlevelorder(n);

    // ll dia = diameter(n); //0(n*hight)
    // HDPair optdia = optDiameter(n); //o(n)

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