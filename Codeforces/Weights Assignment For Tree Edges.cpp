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
        ll n,root;
        cin>>n;
        
        vector<ll> v(n+1),p(n+1);
        for(ll i=1;i<=n;i++){
            cin>>v[i];
            if(v[i]==i)
                root= i;
        }
        for(ll i=1;i<=n;i++){
            cin>>p[i];
        }
        vector<ll> dist(n+1,-1),weight(n+1);
        dist[root]=0;
        if(p[1]!=root){
            cout<<-1<<endl;
            continue;
        }
        bool check = true;
        for(ll i=2;i<=n;i++){
            ll node = p[i];
            ll x= v[node];
            if(dist[x]==-1){
                cout<<-1<<endl;
                check=false;
                break;
            }
            dist[node]= i-1;
            weight[node] = dist[node] - dist[x];
        }
        if(check){
            for(ll i=1;i<=n;i++)
                cout<<weight[i]<<" ";

            cout<<endl;
        }

    }
    return 0;
}
  