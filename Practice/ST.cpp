#include <bits/stdc++.h>
#include<set>
#include<map>
#include<vector>
#include<string>
#define ll long long int
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
const int MAXN = 1e6+7;
void build(int a[], int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        t[v] = t[v*2];
        t[v].insert(t[v*2+1]);
    }
}

int pcount(int v, int tl, int tr, int l, int r) {
    if (l > r) 
        return 0;
    if (l == tl && r == tr) {
        return t[v].size();
    }
    int tm = (tl + tr) / 2;
    return pcount(v*2, tl, tm, l, min(r, tm))
           + pcount(v*2+1, tm+1, tr, max(l, tm+1), r);
}

void update(int v, int tl, int tr, int pos, int new_val) {
    if (tl == tr) {
        t[v].insert(new_val);
    } else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v*2, tl, tm, pos, new_val);
        else
            update(v*2+1, tm+1, tr, pos, new_val);
        t[v] = t[v*2];
        t[v].insert(t[v*2+1]);
    }
}


void judge(){
    //fastio;
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
     freopen("output.txt", "w", stdout);
    #endif
}
int main(){
    int n;
    cin>>n;
    vector<int>a(N);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    int q;
    cin>>q;
    int ans = 0;
    for(int i=0 ; i<q ; i++){
        int t,l,r;
        cin>>t>>l>>r;
        if( t== 1){

        }
        else if(t == 2){

        }
    }
}