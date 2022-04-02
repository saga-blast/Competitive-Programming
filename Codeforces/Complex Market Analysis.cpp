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
const int MAX = 1000001;
bool prime[MAX];

void sieve ()
{
    int i,j;
    prime[0] = prime[1] = true;

    for (i=4; i<MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAX; j+=2*i)
                prime[j] = true;
}

int main(){

    judge();
    sieve();
    int t;
    cin>>t;
    while(t--){
        ll n,e;
        cin>>n>>e;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        ll ans=0;
        for(ll i=0;i<n;i++){
           ll l,r;
           l=r=0;
           if(!prime[v[i]]){
               for(ll j=i+e;j<n;j+=e){
                    if(v[j]==1) 
                        r++;
                    else
                        break;
               }
               for(ll j=i-e;j>=0;j-=e){
                    if(v[j]==1)
                        l++;
                    else
                        break;
               }
           }
           ans+=l+r+l*r; 
        }

        cout<<ans;

        cout<<endl;
    }
    return 0;
}
