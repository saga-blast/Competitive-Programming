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
    ll n;
    cin>>n;
    ll ans=0;
    int a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=1;i<n;i++){
            if(a[i] < a[i-1]){
                ans+=a[i-1]-a[i];
                a[i]=a[i-1];
            }
    }
    cout<<ans;
    return 0;
}