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
    int t;
    cin>>t;
    while(t--){
       ll n,m;cin>>n>>m;
   if(n==1 && m==1){
       cout<<0<<endl;
   }
   else if(n==1 || m==1){
       cout<<1<<endl;
   }
   else cout<<2<<endl;
    }
    return 0;
}
  