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
        ll x,n,z=0;
        cin>>x>>n;
        
        if(n%4==1){
            z=-n;
        }
        else if(n%4==2){
            z=1;
        }
        else if(n%4==3){
            z=n+1;
        }
        else{
            z=0;
        }
        (x&1)?cout<<x-z<<endl:cout<<x+z<<endl;
    }
    return 0;
}
  