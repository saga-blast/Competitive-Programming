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
ll check(string s){
    ll k = s.length(),r=0;
    for(ll i=0;i<k;i++){
        if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c'){
            r++;
            i+=2;
        }
    }
    return r;
}


int main(){

    judge();
    int n;
    cin>>n;
    while(n--){
        ll k;
        cin>>k;
        vector<ll> v(k);
        for(int i=0;i<k;i++)
            cin>>v[i];

        sort(v.begin(),v.end());

        ll ans=v[0];
        for(int i=0;i<k-1;i++)
            ans = max(ans,v[i+1]-v[i]);

        cout<<ans<<endl;

    }
    return 0;
}
  