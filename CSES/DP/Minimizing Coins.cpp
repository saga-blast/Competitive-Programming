#include <bits/stdc++.h>
#include<vector>
#include<cmath>
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
	ll n,x;
	cin>>n>>x;
	vector<ll> v(n);
	for(ll i=0;i<n;i++){
		cin>>v[i];
	}
	vector<ll> dp(1000001);
	for(int i=1;i<=x;i++)
	 	dp[i]=INT_MAX;
	//ll ans=INT_MAX;
	//dp[0]=0;
	for(ll i=1;i<=x;i++){
		for(ll j=0;j<n;j++){
			if(i-v[j]>=0){
				//cout<<dp[i-v[j]]+1 <<"  "<<dp[i]<<endl;
				dp[i] = min(dp[i-v[j]]+1 , dp[i]);
			}
		}
		//cout<<dp[i]<<endl;
	}

	if(dp[x]==INT_MAX) dp[x]=-1;
	
	cout<<dp[x]<<endl;
	return 0;
}