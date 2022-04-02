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
    int t;
    cin>>t;
    while(t--){
        ll n,h;
        cin>>n>>h;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
   
        ll l=1,r=h;
        ll k=h;
        while(l<=r){
            ll mid=(l+r)/2;
            ll attack=0;
            for(int i=0;i<n;i++){
                ll curr=mid;
                if(i<n-1){
                    ll d=a[i+1]-a[i];
                    if(d<mid) 
                    curr=d;
                }
                attack+=curr;
            }
            if(attack>=h){
                k=mid;
                r=mid-1;
            }
            else 
                l=mid+1;
        } 
        cout<<k<<endl;
    }
    return 0;
}
  