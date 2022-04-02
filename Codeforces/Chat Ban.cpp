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
        
        ll ans;
        ll l=1,r=2*n-1;
        ll total = n*(n+1) - n;
        while(l<=r){
            ll mid = (l + r)/2;
            ll req = 0;

		    if(mid > n){
			    ll diff = mid - n;
			    ll val = n - diff;
			    req = total - (val * (val + 1))/2;
		    }
		    else{
			    req = (mid * (mid - 1))/2;
            }

    		if(h > req){
			    ans = mid;
			    l = mid + 1;
		    }
		    else{
			    r = mid - 1;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}
  