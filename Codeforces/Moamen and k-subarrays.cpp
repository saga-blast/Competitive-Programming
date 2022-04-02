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
        ll n,k;
        cin>>n>>k;
        
        vector<pair<ll,ll>> v(n);
		for (ll i = 0; i < n; i++) {
			cin >> v[i].first;
			v[i].second = i;
		}
		sort(v.begin(), v.end());
		ll ans = 1;
		for (ll i = 1; i < n; i++)
			if (v[i - 1].second + 1 != v[i].second)
				ans++;
        //cout<<ans<<endl;
        (ans<=k)?cout<<"Yes"<<endl:cout<<"No"<<endl;
        

    }
    return 0;
}
  