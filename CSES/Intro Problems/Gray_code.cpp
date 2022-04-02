#include <bits/stdc++.h>
#include<vector>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define nl "\n"
ll mod=1000000007;
void judge(){
    fastio;
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif
}

int main(){
    judge();

    int n;
    cin>>n;
    // cout<<(1<<n)<<endl;
    // cout<<"------"<<endl;

    for(int i=0;i< (1<<n);i++){
        //cout<<"i : "<<i<<" | v : ";
        int v = (i^ (i>>1));
        //cout<<v<<" ";
        bitset<32> x(v);

        string s= x.to_string();
        //cout<<endl;
        cout<<s.substr(32-n)<<endl;
    }
    
    return 0;
}