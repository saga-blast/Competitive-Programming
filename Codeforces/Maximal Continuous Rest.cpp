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
    // int t;
    // cin>>t;
    // while(t--){
        // int n;
        // cin>>n;
        // ll sum=0;
        // vector<ll> v(n);
        // for(int i=0;i<n;i++){
        //     cin>>v[i];
        // }
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }

    ll ans = INT_MIN;
    for(ll i=0;i<n;i++){
        ll count=0;
        if(v[i]==1){
            if(count==0){
                count++;
            }
            for(ll j=i+1;j<n && v[j]==1;j++){
                i=j;
                count++;
            }
            if(i==n-1 && v[0]==1){
                for(ll k=0;v[k]==1;k++)
                    count++;
            }
                //count++;
        }
        ans = max(count,ans);
    }
    cout<<ans<<endl;
    // }
    return 0;
}
  