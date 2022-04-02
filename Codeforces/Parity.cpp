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
ll  bigpow(ll x, ll e){
    ll res;

    if (e == 0)
        res = 1;
    else if (e == 1) 
        res = x;
    else{
        res = bigpow(x, e / 2);
        res = res * res;
        if (e % 2) 
            res = res * x;
        }
    return res;
}

int main(){

        judge();

        ll cnt=0,ans=0,m,n;
        cin>>m>>n;
        ll  a[n];
        for(ll i=0; i<n; i++)
            cin>>a[i];
    
        ll x=n-1;
        for(ll i=0;i<n;i++){
            ans+=a[i]*bigpow( m, x);
            // cout<<a[i]<<" "<<pow( m, x)<<endl;
            if(x==0)
                x=0;
            else 
                x--;
        }
    
        if(ans&1)
            cout<<"odd"<<endl;
        else
            cout<<"even"<<endl;
            
        return 0;
}
  