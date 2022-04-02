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
        ll n;cin>>n;
        vector<ll> a(n);
        unordered_map<ll,ll> mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        vector<ll> prev(n),curr(n);
        prev=a;
        vector<vector<ll>> v;
        v.push_back(a);
        for(int i=0;i<n;i++) 
            curr[i]=mp[a[i]];
    
        ll times=0;
        while(curr!=prev){
            mp.clear();
            v.push_back(curr);
            times++;
            prev=curr;
            for(int i=0;i<n;i++)
                mp[curr[i]]++;
      
            for(int i=0;i<n;i++) 
                curr[i]=mp[prev[i]];

        }
        ll q;
        cin>>q;

        while(q--){
        ll x,k;
        cin>>x>>k;
        if(k>=times)
            cout<<v[times][x-1]<<endl;
        else 
            cout<<v[k][x-1]<<endl;
        }

    }
    return 0;
}
  