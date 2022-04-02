#include <bits/stdc++.h>
#include<vector>
#include<set>
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
    ll n,m,k,count=0;
    cin>>n>>m>>k;

    vector<ll> v(n),g(m);
    //ll sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<m;i++){
        cin>>g[i];
    }
    vector<bool> check(m,false);
    sort(v.begin(), v.end());
    sort(g.begin(),g.end());
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if((v[i] >= (g[j]-5)) && (v[i] <= (g[j]+5)) && (check[j]==false)){
                count++;
                check[j]=true;
                //cout<<v[i]<<endl;
                break;
            }
            if(g[j] > v[i] + 5){
                break;
            }
        }
    }

    cout<<count<<endl;
    
    return 0;
}