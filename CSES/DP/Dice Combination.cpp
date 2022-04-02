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
	ll n;
	cin>>n;
	vector<ll> dp(n+1,0);
	dp[0]=0;
	dp[1]=1;
	dp[2]=2;
	for(int i=2;i<=n;i++){
		ll sum=0;
		if(i>=1)
			sum=(sum+dp[i-1])%mod;
		if(i>=2)
			sum=(sum+dp[i-2])%mod;
		if(i>=3)
			sum=(sum+dp[i-3])%mod;
		if(i>=4)
			sum=(sum+dp[i-4])%mod;
		if(i>=5)
			sum=(sum+dp[i-5])%mod;
		if(i>=6)
			sum=(sum+dp[i-6])%mod;	
		if(i<=6)
			sum++;
		sum%=mod;
		dp[i]=sum;		
	}
	cout<<dp[n]<<endl;
	return 0;
}